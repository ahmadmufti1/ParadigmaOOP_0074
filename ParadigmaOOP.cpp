#include <iostream> 
using namespace std;

// Membuat kelas Mahasiswa
class Mahasiswa {
public: //Akses publik memungkinkan anggota kelas diakses dari luar kelas
    int nim; //deklarasi variabel nim dengan tipe data integer
    string nama; //deklarasi variabel nama dengan tipe data string
    float nilai; //deklarasi variabel nilai dengan tipe data float
    void printData() {//fungsi untuk mencetak data mahasiswa
        cout << "NIM: " << nim << endl;
        cout << "Nama: " << nama << endl;
        cout << "Nilai: " << nilai << endl;
    }
};