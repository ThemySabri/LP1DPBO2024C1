#include <bits/stdc++.h>
#include "Human.cpp"

int main()
{
    // intansiasi objek dengan konstruktor default
    int id, i, input, n = 0;
    string name, bidang, partai;

    list<Human> llist;
    HumanList humanList;

    cout << "Pilih operasi yang diinginkan [1, 2, 3, 4]"
         << "\n"
         << "1. Tambah"
         << "\n"
         << "2. Hapus"
         << "\n "
         << " 3. Edit "
         << "\n "
         << " 4. Keluar "
         << "\n " << endl;
    cin >> input;
    switch (input)
    {
    case 1:
        cout
            << "Masukan Jumlah Data Anggota Dewan" << endl;
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
        break;
    case 2:
    }

    cout
        << "Masukan Jumlah Data Anggota Dewan" << endl;
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

    cout << "Data Anggota Dewan : "
         << "\n";
    i = 0;
    for (list<Human>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        cout << (i + 1) << ". " << it->getID() << " || " << it->getName() << " || " << it->getBidang() << " || " << it->getPartai() << "\n";
        i++;
    }

    return 0;
}