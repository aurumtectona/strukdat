#include <iostream>

using namespace std;
struct Stack {
    int top;
    int data[5];
}tumpukan;

void init(){
    tumpukan.top = -1;
}
bool isempty() {
    return tumpukan.top == -1;
}
bool isfull() {
    return tumpukan.top == 5-1;
}
void push() {
    if (isfull()) {
        cout << "\nSUDAH PENUH" <<endl;
    }
    else {
    tumpukan.top++;
    cout <<"\nMasukkan  :   ";cin>> tumpukan.data[tumpukan.top];
    cout<<"\nNo. Antrian "<<tumpukan.data[tumpukan.top]<<" harap menunggu"<<endl;
    }
}
void pop() {
    if (isempty()) {
        cout<<"\nDATA KOSONG"<<endl;
    }
    else{
        cout<<"\nNO. Antrian "<<tumpukan.data[tumpukan.top]<<" harap menunggu"<<endl;
        tumpukan.top--;
    }
}
void printstack() {
    if (isempty()) {
        cout<<"ANTRIAN NOIR DENTAL CARE";
        cout<<"\n============================";
    }
    else {
        cout<<"\nTumpukan: ";
        for (int i = tumpukan.top; i >= 0; i--)
            cout<<tumpukan.data[i] << ((i==0) ? "" : ",");
    }
}
int main() {
    int choise;
    init();
    do {
        printstack();
        cout<<"\n1. Antrian Masuk"
        <<"\n2. Antrian Selanjutnya"
        <<"\n3. Exit"
        <<"\nPilih Angka    :   ";
        cin>>choise;
        switch(choise)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        default:
            cout<<"Tekan Tombol Untuk Memulai Antrian"<<endl;
            break;
        }
    } while(choise!=3);
    cout << "==============================================" << endl;
    cout<<"SIMPAN BUKTI ANTRIAN INI DAN TUNJUKAN KEPADA PETUGAS"<<endl;
    cout << "==============================================" << endl;
}
