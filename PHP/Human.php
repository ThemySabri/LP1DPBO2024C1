/*
Bismillah Saya Themy Sabri Syuhada dengan NIM 2203903.
Demi keberkahan-Nya, saya berjanji mengerjakan
latihan praktikum 1 DPBO dengan jujur dan
tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/
<?php

// Deklarasi class Human. Best practice-nya,
// nama class pakai huruf kapital depannya
class Human
{
    // Atribut privat
    private $id;
    private $name;
    private $bidang;
    private $partai;
    private $foto; // Atribut baru untuk menampilkan foto anggota dewan

    // Konstruktor
    public function __construct($id = 0, $name = "", $bidang = "", $partai = "", $foto = "")
    {
        $this->id = $id;
        $this->name = $name;
        $this->bidang = $bidang;
        $this->partai = $partai;
        $this->foto = $foto;
    }

    // Method get disesuaikan dengan tipe data yang akan direturn nantinya

    // Get ID
    public function getID()
    {
        return $this->id;
    }

    // Set ID
    public function setID($id)
    {
        $this->id = $id;
    }

    // Get name
    public function getName()
    {
        return $this->name;
    }

    // Set name
    public function setName($name)
    {
        $this->name = $name;
    }

    // Get bidang
    public function getBidang()
    {
        return $this->bidang;
    }

    // Set bidang
    public function setBidang($bidang)
    {
        $this->bidang = $bidang;
    }

    // Get partai
    public function getPartai()
    {
        return $this->partai;
    }

    // Set partai
    public function setPartai($partai)
    {
        $this->partai = $partai;
    }

    // Get foto
    public function getFoto()
    {
        return $this->foto;
    }

    // Set foto
    public function setFoto($foto)
    {
        $this->foto = $foto;
    }

    // Method eat
    public function eat()
    {
        echo $this->name . " is eating!" . PHP_EOL;
    }

    // Method sleep
    public function sleep()
    {
        echo $this->name . " is sleeping!" . PHP_EOL;
    }
}

echo "PHP Version: " . phpversion() . PHP_EOL;
