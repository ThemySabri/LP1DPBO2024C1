# Bismillah Saya Themy Sabri Syuhada dengan NIM 2203903.
# Demi keberkahan-Nya, saya berjanji mengerjakan
# latihan praktikum 1 DPBO dengan jujur dan
# tidak melakukan kecurangan seperti yang telah dispesifikasikan.
# Aamiin.

from Human import Human

print("Selamat datang di aplikasi Kenali DPR\n")

llist = []

while True:
    print("Pilih operasi yang diinginkan [1, 2, 3, 4, 5]")
    print("1. Tambah")
    print("2. Hapus")
    print("3. Edit")
    print("4. Tampil")
    print("5. Keluar")

    input_user = int(input())

    if input_user == 1:
        print("Masukkan Jumlah Data Anggota Dewan")
        n = int(input())
        print("Masukkan Data Anggota Dewan (ID Nama Bidang Partai)")
        for i in range(n):
            id, name, bidang, partai = input().split()
            temp = Human(int(id), name, bidang, partai)
            llist.append(temp)

    elif input_user == 2:
        if not llist:
            print("List kosong. Tidak ada yang dapat dihapus.")
        else:
            print("Masukkan ID yang ingin dihapus:")
            id_to_remove = int(input())
            found = False
            for human in llist:
                if human.getID() == id_to_remove:
                    llist.remove(human)
                    print(f"Data dengan ID {id_to_remove} berhasil dihapus.")
                    found = True
                    break
            if not found:
                print(f"Data dengan ID {id_to_remove} tidak ditemukan.")

    elif input_user == 3:
        if not llist:
            print("List kosong. Tidak ada yang dapat diedit.")
        else:
            print("Masukkan ID yang ingin diedit:")
            id_to_edit = int(input())
            found = False
            for human in llist:
                if human.getID() == id_to_edit:
                    print("Masukkan data baru (Nama Bidang Partai):")
                    name, bidang, partai = input().split()
                    human.setName(name)
                    human.setBidang(bidang)
                    human.setPartai(partai)
                    print(f"Data dengan ID {id_to_edit} berhasil diubah.")
                    found = True
                    break
            if not found:
                print(f"Data dengan ID {id_to_edit} tidak ditemukan.")

    elif input_user == 4:
        if not llist:
            print("List kosong.")
        else:
            print("Data Anggota Dewan : ")
            for i, human in enumerate(llist, 1):
                print(
                    f"{i}. {human.getID()} || {human.getName()} || {human.getBidang()} || {human.getPartai()}")

    elif input_user == 5:
        print("Terima kasih. Have a nice day :)\n")
        break

    else:
        print("Input tidak valid. Masukkan nomor 1-5.")
