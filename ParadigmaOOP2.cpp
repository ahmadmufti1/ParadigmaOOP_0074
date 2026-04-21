#include <iostream>
using namespace std;

class Barang {
public:
    string nama; //deklarasi variabel nama dengan tipe data string
    int jumlah; //deklarasi variabel jumlah dengan tipe data integer
    string kategori; //deklarasi variabel kategori dengan tipe data string
    string tanggalProduksi; //deklarasi variabel tanggalProduksi dengan tipe data string

    void printData() { //fungsi untuk mencetak data barang
        cout << "Nama: " << nama << endl;
        cout << "Jumlah: " << jumlah << endl;
        cout << "Kategori: " << kategori << endl;
        cout << "Tanggal Produksi: " << tanggalProduksi << endl;
    }
};
int main() {
    Barang elektronik; //membuat objek elektronik dari kelas Barang
    Barang nonElektronik; //membuat objek nonElektronik dari kelas Barang

    //mengisi nilai untuk objek elektronik
    elektronik.nama = "Laptop";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2024-01-15";

    //mengisi nilai untuk objek nonElektronik
    nonElektronik.nama = "Meja";
    nonElektronik.jumlah = 5;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "2023-12-01";

    //memanggil fungsi printData untuk mencetak data barang elektronik
    cout << "Data Barang Elektronik:" << endl;
    elektronik.printData();
    cout << endl;

    //memanggil fungsi printData untuk mencetak data barang nonElektronik
    cout << "Data Barang Non Elektronik:" << endl;
    nonElektronik.printData();
} 
