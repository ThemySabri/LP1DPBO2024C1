<?php
require('Human.php');

echo "Selamat datang di aplikasi Kenali DPR\n";

$llist = [];

do {
    echo "Pilih operasi yang diinginkan [1, 2, 3, 4, 5]" . PHP_EOL;
    echo "1. Tambah" . PHP_EOL;
    echo "2. Hapus" . PHP_EOL;
    echo "3. Edit" . PHP_EOL;
    echo "4. Tampil" . PHP_EOL;
    echo "5. Keluar" . PHP_EOL;

    $input = intval(trim(fgets(STDIN)));

    if ($input == 1) {
        echo "Masukkan Data Anggota Dewan (ID Nama Bidang Partai Foto)" . PHP_EOL;
        $input_data = explode(" ", trim(fgets(STDIN)));
        $temp = new Human(intval($input_data[0]), $input_data[1], $input_data[2], $input_data[3], $input_data[4]);
        $llist[] = $temp;
        echo "Data berhasil ditambahkan." . PHP_EOL;
    } elseif ($input == 2) {
        if (empty($llist)) {
            echo "List kosong. Tidak ada yang dapat dihapus." . PHP_EOL;
        } else {
            echo "Masukkan ID yang ingin dihapus:" . PHP_EOL;
            $id_to_remove = intval(trim(fgets(STDIN)));
            $found = false;
            foreach ($llist as $key => $human) {
                if ($human->getID() == $id_to_remove) {
                    unset($llist[$key]);
                    echo "Data dengan ID $id_to_remove berhasil dihapus." . PHP_EOL;
                    $found = true;
                    break;
                }
            }
            if (!$found) {
                echo "Data dengan ID $id_to_remove tidak ditemukan." . PHP_EOL;
            }
        }
    } elseif ($input == 3) {
        if (empty($llist)) {
            echo "List kosong. Tidak ada yang dapat diedit." . PHP_EOL;
        } else {
            echo "Masukkan ID yang ingin diedit:" . PHP_EOL;
            $id_to_edit = intval(trim(fgets(STDIN)));
            $found = false;
            foreach ($llist as $human) {
                if ($human->getID() == $id_to_edit) {
                    echo "Masukkan data baru (Nama Bidang Partai Foto):" . PHP_EOL;
                    $input_data = explode(" ", trim(fgets(STDIN)));
                    $human->setName($input_data[0]);
                    $human->setBidang($input_data[1]);
                    $human->setPartai($input_data[2]);
                    $human->setFoto($input_data[3]);
                    echo "Data dengan ID $id_to_edit berhasil diubah." . PHP_EOL;
                    $found = true;
                    break;
                }
            }
            if (!$found) {
                echo "Data dengan ID $id_to_edit tidak ditemukan." . PHP_EOL;
            }
        }
    } elseif ($input == 4) {
        if (empty($llist)) {
            echo "List kosong." . PHP_EOL;
        } else {
            echo "Data Anggota Dewan:" . PHP_EOL;
            echo "================================================================" . PHP_EOL;
            echo "| ID | Nama | Bidang | Partai | Foto |" . PHP_EOL;
            echo "================================================================" . PHP_EOL;
            foreach ($llist as $human) {
                printf(
                    "| %-2d | %-18s | %-11s | %-10s | %-13s |" . PHP_EOL,
                    $human->getID(),
                    $human->getName(),
                    $human->getBidang(),
                    $human->getPartai(),
                    $human->getFoto()
                );
            }
            echo "================================================================" . PHP_EOL;
        }
    } elseif ($input == 5) {
        echo "Terima kasih. Have a nice day :)" . PHP_EOL;
        break;
    }
} while (true);
