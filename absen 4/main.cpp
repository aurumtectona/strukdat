#include <iostream>

using namespace std;

struct siswa{
    char nama[20], kelas [2];
    int sekolah, program;
};
struct siswa nominal[1];
main()
{
    int bts, var;
    for(int i=0; i<1; i++)
    {
    cout<<endl;
    cout << "FORMULIR PENDAFTARAN BIMBEL SIMFONI 2021" << endl;
    cout << "----------------------------------------" << endl;
    cout << "\nNAMA:    ";cin>>nominal[i].nama;
    cout << "\nKELAS:   ";cin>>nominal[i].kelas;
    input:
        cout << "\nSEKOLAH[1=SMA, 2=SMK]:   ";cin>>nominal[i].sekolah;
        cout << "\nPROGRAM PILIHANN[1=SBM&MANDIRI, 2=KEDINASAN]:   ";cin>>nominal[i].program;
        if(nominal[i].program==1)
        {
            var=1850000;
        }else if(nominal[i].program==2)
        {
            var=2450000;
        }cout<<endl;
    cout << "\n--------------------------------------" << endl;
    cout << "\Output:   " << endl;
    cout << "\nNAMA:   " <<nominal[i].nama;
    cout << "\nKELAS:   " <<nominal[i].kelas;
    cout << "\nSEKOLAH:   " <<nominal[i].sekolah;
    cout << "\nPROGRAM PILIHAN: " <<nominal[i].program;
    cout << "\nTOTAL PEMBAYARAN:    " <<var;
    cout << "\n-------------------------------------" <<endl;
    cout << "\nSILAHKAN SIMPAN RESI INI SEBAGAI BUKTI PEMBAYARAN" <<endl;
    }
}
