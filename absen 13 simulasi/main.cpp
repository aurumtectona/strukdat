#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};
Node * head, *tail

void awal(){
    head = NULL;
}
bool isEmpty(){
    if (head == NULL){
        return true;
    }
    return false;
}
void tambahdepan (int databaru) {
    Node * nodeBaru;
    nodeBaru = new Node;
    nodeBaru -> data = databaru;
    nodeBaru -> next = NULL;
    if (isEmpty()) {
        head = nodeBaru;
        head -> next = NULL;
    }
    else{
        nodeBaru -> next = head;
        head = nodeBaru;
    }
    cout <<"\n Berhasil ditambahkan" << endl;
}

void tampil(){
    if (!isEmpty()){
        Node * bantu;
        bantu = head;
        do{
            cout << bantu -> data << "--> ";
            bantu = bantu -> next;
        } while (bantu != NULL);
        cout<<endl;
        }else{
        cout << "\nTidak tersedia, mohon untuk menambahkan antrian";"
        }
}

int main()
{
    cout << "------------------------" << endl;
    cout << "Menambah Node dari Depan" << endl;
    cout << "------------------------" << endl;
    tambahDepan(13);
    tampil();

    tambahHead(24);
    tampil();

    tambahHead(19);
    tampil();

    tambahHead(2);
    tampil();

    return 0;
}
