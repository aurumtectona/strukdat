#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
};

Node *head;
Node *tail;

void awal(){
    head = NULL;
    tail = NULL;
}

bool isEmpty(){
    if (head == NULL){
        return true;
    }
    return false;
}

void tambahDepan(int dataBaru){
    //node baru
    Node *nodeBaru;
    nodeBaru = new Node;

    //node baru dengan inputan
    nodeBaru -> data = dataBaru;
    nodeBaru -> next = NULL;
    nodeBaru -> prev = NULL;

    //data kosong
    if(isEmpty()){
        head = nodeBaru;
        tail = nodeBaru;
        head -> next = NULL;
        head -> prev = NULL;
    } else{
        nodeBaru->next = head;
        head->prev = nodeBaru;
        head = nodeBaru;
    }
    cout << dataBaru << " Berhasil ditambahkan" << endl;
}

void tampil(){
    Node *current;

    current = head;
    if (!isEmpty()){
        while(current != NULL){
            cout << "~[" << current->data<<"]";
            current = current -> next;
        }
        cout << endl;
    } else{
        cout << "Data masih kosong" << endl;
    }
}

int main()
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "ABSEN STRUKUR DATA KE 20" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    tambahDepan(24);
    tampil();

    tambahDepan(26);
    tampil();

    tambahDepan(28);
    tampil();
    return 0;
}
