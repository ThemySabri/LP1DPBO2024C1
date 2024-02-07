/*
Bismillah Saya Themy Sabri Syuhada dengan NIM 2203903.
Demi keberkahan-Nya, saya berjanji mengerjakan
latihan praktikum 1 DPBO dengan jujur dan
tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/
// import library
#include <bits/stdc++.h>
#include "Human.cpp"

using namespace std;

int main()
{
    int id, i, input, n = 0;
    string name, bidang, partai;

    list<Human> llist;

    cout << "Selamat datang di aplikasi Kenali DPR"
         << "\n"
         << endl;

    do
    {
        cout << "Pilih operasi yang diinginkan [1, 2, 3, 4]" << endl;
        cout << "1. Tambah" << endl;
        cout << "2. Hapus" << endl;
        cout << "3. Edit" << endl;
        cout << "4. Tampil" << endl;
        cout << "5. Keluar" << endl;
        cin >> input;

        if (input == 1)
        {
            cout << "Masukan Jumlah Data Anggota Dewan" << endl;
            cin >> n;
            cout << "Masukan Data Anggota Dewan" << endl;
            for (i = 0; i < n; i++)
            {
                Human temp;

                cin >> id >> name >> bidang >> partai;

                temp.setID(id);
                temp.setName(name);
                temp.setBidang(bidang);
                temp.setPartai(partai);

                llist.push_back(temp);
            }
        }
        else if (input == 2)
        {
            if (llist.empty())
            {
                cout << "List kosong. Tidak ada yang dapat dihapus." << endl;
            }
            else
            {
                cout << "Masukkan ID yang ingin dihapus: ";
                cin >> id;
                for (auto it = llist.begin(); it != llist.end();)
                {
                    if (it->getID() == id)
                    {
                        it = llist.erase(it);
                        cout << "Data dengan ID " << id << " berhasil dihapus." << endl;
                    }
                    else
                    {
                        ++it;
                    }
                }
            }
        }
        else if (input == 3)
        {
            if (llist.empty())
            {
                cout << "List kosong. Tidak ada yang dapat diedit." << endl;
            }
            else
            {
                cout << "Masukkan ID yang ingin diedit: ";
                cin >> id;
                for (auto &human : llist)
                {
                    if (human.getID() == id)
                    {
                        cout << "Masukkan data baru (Nama Bidang Partai): ";
                        cin >> name >> bidang >> partai;
                        human.setName(name);
                        human.setBidang(bidang);
                        human.setPartai(partai);
                        cout << "Data dengan ID " << id << " berhasil diubah." << endl;
                    }
                }
            }
        }
        else if (input == 4)
        {
            cout << "Data Anggota Dewan : " << endl;
            i = 0;
            for (const auto &human : llist)
            {
                cout << (i + 1) << ". " << human.getID() << " || " << human.getName() << " || " << human.getBidang() << " || " << human.getPartai() << endl;
                i++;
            }
        }
    } while (input != 5);

    if (input == 5)
    {
        cout << "Terima kasih. Have a nice day :)"
             << "\n"
             << endl;
    }

    return 0;
}
