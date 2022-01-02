#include <iostream>

using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
};

string data;
Node *head;
Node *tail;

void awal(){
    head = NULL;
    tail = NULL;
}

bool isEmpty(){
    if(head == NULL){
        return true;
    }
    return false;
}

void tambahDepan(int dataBaru){
    Node *nodeBaru;
    nodeBaru = new Node;

    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;
    nodeBaru->prev = NULL;

    if(isEmpty()){
        head = nodeBaru;
        tail = nodeBaru;
        head->next = NULL;
        head->prev = NULL;

        tail->next = NULL;
        tail->prev = NULL;
    } else{
        nodeBaru->next = head;
        head->prev = nodeBaru;
        head = nodeBaru;
    }
    cout << dataBaru << "berhasil tambah depan" <<endl;
}

void tambahBelakang(int dataBaru){
    Node *nodeBaru;
    nodeBaru = new Node;

    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;
    nodeBaru->prev = NULL;

    if(isEmpty()){
        head = nodeBaru;
        tail = nodeBaru;
        head->next = NULL;
        head->prev = NULL;

        tail->next = NULL;
        tail->prev = NULL;
    } else{
        tail->next = nodeBaru;
        nodeBaru->prev = tail;
        tail = nodeBaru;
    }
    cout << dataBaru << "berhasil tambah belakang" <<endl;
}

void hapusBelakang(){
    Node *dell;
    if(isEmpty()){
        cout<<"data kosong"<<endl;
    }else{
        if(head->next != NULL){
            dell = tail;
            tail = tail ->prev;
            tail->next = NULL;
        }else{
            dell = head;
            head = NULL;
            tail = NULL;
        }
        cout<<"data belakang di hapus"<<endl;
        delete dell;
    }
}

void hapusDepan(){
    Node *dell;
    if(isEmpty()){
        cout<<"data kosong"<<endl;
    }else{
        if(head->next != NULL){
            dell = head;
            head = head ->next;
            head->prev = NULL;
        }else{
            dell = head;
            head = NULL;
            tail = NULL;
        }
        cout<<"Data depan dihapus"<<endl;
        delete dell;
    }
}

void tampil(){
    Node *current;

    current = head;
    if(!isEmpty()){
        while(current != NULL){
            cout<<current->data<<", ";
            current = current->next;
        }
        cout<<endl;
    }else{
        cout<<"data masih kosong"<<endl;
    }
}
int main()
{
    int choose;
    do{
        cout<<"\n         ABSEN 22        "
            << "\n ~~~~~~~~~~~~~~~~~~~~~~~~~"
            <<"\n 1) tambah depan"
            <<"\n 2) tambah belakang"
            <<"\n 3) hapus depan"
            <<"\n 4) hapus belakang"
            <<"\n 5) tampilkan data"
            <<"\n ~~~~~~~~~~~~~~~~~~~~~~~~~"
            <<"\n masukkan pilihan :";
            cin>>choose;
            switch(choose){
                case 1:
                    cout<<endl;
                    tambahDepan(75);
                    tambahDepan(50);
                    tambahDepan(35);
                    break;

                case 2:
                    cout<<endl;
                    tambahBelakang(80);
                    tambahBelakang(100);
                    tambahBelakang(120);
                    break;

                case 3:
                    cout<<endl;
                    hapusDepan();
                    break;

                case 4:
                    cout<<endl;
                    hapusBelakang();
                    break;

                case 5:
                    cout<<endl;
                    tampil();
                    break;
            }
    }
    while(choose!=0);
}
