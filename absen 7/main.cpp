#include <iostream>
#define MAX 6

using namespace std;
struct queue{
    int top, data[MAX];
}antrian;
int data;

bool isEmpty(){
    return antrian.top == -1;
}

bool isFull() {
    return antrian.top == MAX-1;
}

void enqueue(){
    if (isFull()){
        cout<<"Maaf Antrian sudah penuh, mohon tunggu beberapa saat lagi."<<endl;
    } else{
        cout<<"Masukkan pilihan: ";
        cin>>data;
        antrian.top=antrian.top+1;
        antrian.data[antrian.top]=data;
        cout<<"nomor "<<antrian.data[antrian.top]<<" telah masuk e antrian."<<endl;
    }
}

void dequeue(){
    if(isEmpty()){
        cout<<"Antrian Kosong"<<endl;
    } else{
        for(int i=0; i<antrian.top; i++)
            antrian.data[i]=antrian.data[i+1];
        antrian.top=antrian.top-1;
    }
}

int clear(){
    return antrian.top=-1;
}

void print(){
    if(isEmpty()){
        cout<<"Antrian Kosong "<<endl;
    } else{
        cout<<"Antrian saat ini "<<endl;
        for(int i=antrian.top; i>0; i--)
            cout<<" - "<<antrian.data[i];
        cout<<endl;
    }
}

int main(){
    int nomer;
    cout<<endl;
    do{
        cout<<endl;
        cout<<"----------Service Langgananku----------"<<endl;
        cout<<"   Spesialis HP & Komputer/Laptop      "<<endl;
        cout<<"---------------------------------------"<<endl;
        cout<<"\n 1. Masuk ke antrian"
        <<"\n 2. Batalkan pilihan"
        <<"\n 3. Lihat Antrian sebelumnya"
        <<"\n 4. Hapus pilihan \n"
        <<"\n Masukkan pilihan anda ";
        cin>>nomer;
        switch (nomer){
    case 1:
        enqueue();

        print();
        break;
    case 2:
        dequeue();
        print();
        break;
    case 3:
        print();
        break;
    case 4:
        clear();
        print();
        break;
    default:
        cout<<"Pilihan anda salah"<<endl;
        break;
        }
    }
    while(nomer!=4);
}
