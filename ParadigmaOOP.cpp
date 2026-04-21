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
int main() { //fungsi utama program
    Mahasiswa mhs1; //membuat objek mhs1 dari kelas Mahasiswa

    mhs1.nim = 111; //mengisi nilai nim untuk objek mhs1
    mhs1.nama = "Joko Susilo"; //mengisi nilai nama untuk objek mhs1
    mhs1.nilai = 75.5; //mengisi nilai nilai untuk objek mhs1
    mhs1.printData(); //memanggil fungsi printData untuk mencetak data mahasiswa mhs1
}