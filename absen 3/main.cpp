#include <iostream>

using namespace std;

    struct mhs{
    string NAMA;
    string NIM;
    string PRODI;
    };

int main()
{
    mhs mahasiswa[2];

    mahasiswa[0].NAMA="NELLIS NERIA AURUM TECTONA";
    mahasiswa[0].NIM="A11.2020.12668";
    mahasiswa[0].PRODI="TEKNIK INFORMATIKA";
    // -------------------------------------
    mahasiswa[1].NAMA="EZEKIEL NOELISH KARSA";
    mahasiswa[1].NIM="E14.2020.23400";
    mahasiswa[1].PRODI="TEKNIK MESIN DAN DIRGANTARA";
    // -------------------------------------
    cout << "BIODATA MAHASISWA: " << endl;
    cout << "NAMA: " << mahasiswa[0].NAMA << endl;
    cout << "NIM: " << mahasiswa[0].NIM << endl;
    cout << "PRODI: " << mahasiswa[0].PRODI << endl;
    cout << "----------------------------------------------" << endl;
    cout << "BIODATA MAHASISWA: " << endl;
    cout << "NAMA: " << mahasiswa[1].NAMA << endl;
    cout << "NIM: " << mahasiswa[1].NIM << endl;
    cout << "PRODI: " << mahasiswa[1].PRODI << endl;

    return 0;
}
