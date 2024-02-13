
// import library
import java.util.Scanner;
import java.util.ArrayList;

public class main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Human> humanList = new ArrayList<>();

        System.out.println("Selamat datang di aplikasi Kenali DPR\n");

        int input;
        do {
            System.out.println("Pilih operasi yang diinginkan [1, 2, 3, 4, 5]");
            System.out.println("1. Tambah");
            System.out.println("2. Hapus");
            System.out.println("3. Edit");
            System.out.println("4. Tampil");
            System.out.println("5. Keluar");
            input = scanner.nextInt();

            switch (input) {
                case 1:
                    System.out.println("Masukan Jumlah Data Anggota Dewan:");
                    int n = scanner.nextInt();
                    System.out.println("Masukan Data Anggota Dewan (ID Nama Bidang Partai):");
                    for (int i = 0; i < n; i++) {
                        int id = scanner.nextInt();
                        String name = scanner.next();
                        String bidang = scanner.next();
                        String partai = scanner.next();
                        Human temp = new Human(id, name, bidang, partai);
                        humanList.add(temp);
                    }
                    break;
                case 2:
                    if (humanList.isEmpty()) {
                        System.out.println("List kosong. Tidak ada yang dapat dihapus.");
                    } else {
                        System.out.println("Masukkan ID yang ingin dihapus:");
                        int idToRemove = scanner.nextInt();
                        boolean found = false;
                        for (int i = 0; i < humanList.size(); i++) {
                            if (humanList.get(i).getID() == idToRemove) {
                                humanList.remove(i);
                                System.out.println("Data dengan ID " + idToRemove + " berhasil dihapus.");
                                found = true;
                                break;
                            }
                        }
                        if (!found) {
                            System.out.println("Data dengan ID " + idToRemove + " tidak ditemukan.");
                        }
                    }
                    break;
                case 3:
                    if (humanList.isEmpty()) {
                        System.out.println("List kosong. Tidak ada yang dapat diedit.");
                    } else {
                        System.out.println("Masukkan ID yang ingin diedit:");
                        int idToEdit = scanner.nextInt();
                        boolean found = false;
                        for (Human human : humanList) {
                            if (human.getID() == idToEdit) {
                                System.out.println("Masukkan data baru (Nama Bidang Partai):");
                                String newName = scanner.next();
                                String newBidang = scanner.next();
                                String newPartai = scanner.next();
                                human.setName(newName);
                                human.setBidang(newBidang);
                                human.setPartai(newPartai);
                                System.out.println("Data dengan ID " + idToEdit + " berhasil diubah.");
                                found = true;
                                break;
                            }
                        }
                        if (!found) {
                            System.out.println("Data dengan ID " + idToEdit + " tidak ditemukan.");
                        }
                    }
                    break;
                case 4:
                    if (humanList.isEmpty()) {
                        System.out.println("List kosong.");
                    } else {
                        System.out.println("Data Anggota Dewan:");
                        System.out.println("| ID | Nama | Bidang | Partai |");
                        for (Human human : humanList) {
                            System.out.println("| " + human.getID() + " | " + human.getName() + " | "
                                    + human.getBidang() + " | " + human.getPartai() + " |");
                        }
                    }
                    break;
                case 5:
                    System.out.println("Terima kasih. Have a nice day :)\n");
                    break;
                default:
                    System.out.println("Input tidak valid. Masukkan nomor 1-5.");
            }
        } while (input != 5);

        scanner.close();
    }
}
