#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *head;
Node *tail;

void awal(){
    head = NULL;
}

bool isEmpty(){
    if (head==NULL){
        return true;
    }
    return false;
}

void tambahBelakang(int dataBaru){
    Node *nodeBaru, *bantu;
    nodeBaru = new Node;
    nodeBaru -> data = dataBaru;
    nodeBaru -> next = NULL;

    if(isEmpty()){
        head = nodeBaru;
        head->next=NULL;
    }else{
        bantu = head;
        while (bantu->next != NULL){
            bantu = bantu->next;
        }
        bantu->next = nodeBaru;
    }
    cout<<"NO. " << dataBaru << "berhasil diinput"<<endl;
}

void hapusDepan(){
    Node *hapus;
    int depan;
    if(!isEmpty()){
        if(head->next!=NULL){
            hapus = head;
            depan = hapus->data;
            head = hapus->next;
            delete hapus;
        }else{
            depan = head->data;
            head=NULL;
        }
        cout << "data berhasil dihapus"<<endl;
    }else{
        cout<<"data kosong"<<endl;
    }
}

void tampil(){
    if(!isEmpty()){
        Node *bantu;
        bantu = head;
        do{
            cout<<"-> "<<bantu->data<<" ";
            bantu = bantu->next;
        }while(bantu != NULL);
        cout <<endl;
    }else{
        cout<<"data kosong";
    }
}
int main()
{
    cout << "~~~~~~~~~~~~~~~" << endl;
    cout << "MASUKKAN ANGKA" << endl;
    cout << "~~~~~~~~~~~~~~~" << endl;

    tambahBelakang(6);
    tambahBelakang(7);
    tambahBelakang(8);
    tambahBelakang(9);
    tambahBelakang(10);
    hapusDepan();
    tambahBelakang(11);
    tampil();
    return 0;
}
