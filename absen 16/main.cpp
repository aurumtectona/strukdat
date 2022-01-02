#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};

Node *head, *tail;

void awal(){
    head = NULL;
}

bool isEmpty(){
    if(head==NULL){
        return true;
    }
    return false;
}
void tambahbelakang(int dataBaru){
    Node *nodeBaru, *bantu;
    nodeBaru = new Node;
    nodeBaru ->data = dataBaru;
    nodeBaru->next = NULL;

    if (isEmpty()){
        head = nodeBaru;
        head->next = NULL;
    } else{
        bantu = head;
        while (bantu->next != NULL){
            bantu = bantu -> next;
        }
        bantu->next = nodeBaru;
    }
    cout << dataBaru << " Data tersebut berhasil ditambakan" << endl;
}

void hapusBelakang(){
    Node *hapus, *bantu;
    int tmp;
    if(isEmpty()){
        if(head->next != NULL){
            bantu = head;
            while(bantu->next->next!=NULL){
                bantu = bantu ->next;
            }
            hapus = bantu ->next;
            tmp = hapus -> data;
            bantu ->next=NULL;
            delete hapus;
        } else{
            tmp = head -> data;
            head = NULL;
        }
        cout << tmp << " dihapus" << endl;
    } else{
        cout << " Antrian kosong";
    }
}

void tampil(){
    if(!isEmpty()){
        Node *bantu;
        bantu = head;
        int tumpukan[6], x=0, y;
        do{
            tumpukan[x] = bantu->data;
            bantu = bantu ->next;
            x++;
        }while(bantu!=NULL);
        for(y=x-1; y>=0; y--)
            cout << tumpukan[y] << endl;
        cout<<endl;
    } else{
        cout << " kosong";
    }
}

int main()
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "          LATIHAN PRAKTIKUM 16" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    tambahbelakang(19);
    tampil();

    tambahbelakang(16);
    tampil();

    tambahbelakang(24);
    tampil();

    hapusBelakang();
    tampil();

    tambahbelakang(2);
    tampil();

    return 0;
}
