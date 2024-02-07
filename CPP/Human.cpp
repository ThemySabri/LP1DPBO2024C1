// import library
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>
#include <fstream>

// using standard namespace
using namespace std;

// deklarasi class Human. Best practicenya,
// nama class pakai huruf kapital depannya
class Human
{
private:
    // atribut privat
    int id;
    string name;
    string bidang;
    string partai;

public:
    // atribut publik
    // konstruktor
    Human()
    {
        // set default value untuk name dan gender
        this->name = "";
    }

    // konstruktor dengan parameter
    // bakal dipanggil kalo objek di-instansiasi dengan parameter
    Human(int id, string name, string bidang, string partai)
    {
        this->id = id;
        this->name = name;
        this->bidang = bidang;
        this->partai = partai;
    }

    /*
    Method get disesuaikan dengan tipe data yang bakal direturn nantinya
    */

    // get name
    int getID() const
    {
        return this->id;
    }

    // set name
    void setID(int id)
    {
        this->id = id;
    }

    // get name
    string getName() const
    {
        return this->name;
    }

    // set name
    void setName(string name)
    {
        this->name = name;
    }

    // get name
    string getBidang() const
    {
        return this->bidang;
    }

    // set name
    void setBidang(string bidang)
    {
        this->bidang = bidang;
    }

    // get name
    string getPartai() const
    {
        return this->partai;
    }

    // set name
    void setPartai(string partai)
    {
        this->partai = partai;
    }

    // method eat
    void eat()
    {
        cout << this->name << " is eating!" << '\n';
    }

    // method sleep
    void sleep()
    {
        cout << this->name << " is sleeping!" << '\n';
    }

    // method destruktor
    ~Human() {}
};

class HumanList
{
private:
    vector<Human> humans;

public:
    // Method untuk menambahkan Human baru ke dalam list
    void addHuman(const Human &human)
    {
        humans.push_back(human);
    }

    // Method untuk menghapus Human dari list berdasarkan ID
    void removeHumanByID(int id)
    {
        for (auto it = humans.begin(); it != humans.end(); ++it)
        {
            if (it->getID() == id)
            {
                humans.erase(it);
                return;
            }
        }
        cout << "Human with ID " << id << " not found." << endl;
    }

    // Method untuk mengedit data Human berdasarkan ID
    void editHumanByID(int id, const string &newName, const string &newBidang, const string &newPartai)
    {
        for (auto &human : humans)
        {
            if (human.getID() == id)
            {
                human.setName(newName);
                human.setBidang(newBidang);
                human.setPartai(newPartai);
                return;
            }
        }
        cout << "Human with ID " << id << " not found." << endl;
    }

    // Method untuk menampilkan seluruh data Human dalam list
    void displayAllHumans()
    {
        cout << "List of Humans:" << endl;
        for (const auto &human : humans)
        {
            cout << "ID: " << human.getID() << ", Name: " << human.getName() << ", Bidang: " << human.getBidang() << ", Partai: " << human.getPartai() << endl;
        }
    }

    // method destruktor
    ~HumanList() {}
};
