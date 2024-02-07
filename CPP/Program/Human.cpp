/*
Bismillah Saya Themy Sabri Syuhada dengan NIM 2203903.
Demi keberkahan-Nya, saya berjanji mengerjakan
latihan praktikum 1 DPBO dengan jujur dan
tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/
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
