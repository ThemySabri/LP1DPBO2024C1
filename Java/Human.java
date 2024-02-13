/*
Bismillah Saya Themy Sabri Syuhada dengan NIM 2203903.
Demi keberkahan-Nya, saya berjanji mengerjakan
latihan praktikum 1 DPBO dengan jujur dan
tidak melakukan kecurangan seperti yang telah dispesifikasikan.
Aamiin.
*/

// deklarasi class Human. Best practice-nya,
// nama class pakai huruf kapital depannya
public class Human {
    // atribut privat
    private int id;
    private String name;
    private String bidang;
    private String partai;

    // konstruktor default
    public Human() {
        // set default value untuk name
        this.id = 0;
        this.name = "";
        this.bidang = "";
        this.partai = "";
    }

    // konstruktor dengan parameter
    // bakal dipanggil kalo objek di-instansiasi dengan parameter
    public Human(int id, String name, String bidang, String partai) {
        this.id = id;
        this.name = name;
        this.bidang = bidang;
        this.partai = partai;
    }

    // get id
    public int getID() {
        return this.id;
    }

    // set id
    public void setID(int id) {
        this.id = id;
    }

    // get name
    public String getName() {
        return this.name;
    }

    // set name
    public void setName(String name) {
        this.name = name;
    }

    // get bidang
    public String getBidang() {
        return this.bidang;
    }

    // set bidang
    public void setBidang(String bidang) {
        this.bidang = bidang;
    }

    // get partai
    public String getPartai() {
        return this.partai;
    }

    // set partai
    public void setPartai(String partai) {
        this.partai = partai;
    }

    // method eat
    public void eat() {
        System.out.println(this.name + " is eating!");
    }

    // method sleep
    public void sleep() {
        System.out.println(this.name + " is sleeping!");
    }

    // method destructor
    protected void finalize() {
        // not implemented, as Java handles garbage collection automatically
    }
}
