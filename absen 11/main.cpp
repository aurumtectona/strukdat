#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *  next;
};
Node * head;
Node * tail;

void awal(){
head = NULL;
}
bool isEmpty(){
    if (head == NULL){
        return true;
    }
    return false;
}
void tambahHead int tambahkanHead) {
    Node * tambhakan;
    tambahkan = new Node;
    tambahkan -> data = tambahkanHead;
    tambahkan -> next = NULL;
    if (isEmpty()) {
        head = tambahkan;
        head -> next = NULL;
    }
    else{
        tambahkan -> next = head;
        head = tambahkan;
    }
    cout <<"\n NO. Berhasil ditambahkan ke antrian" << endl;
}
void tambahBelakang (int dataBaru){
    node * nodeBaru, *bantu;
    nodeBaru = new Node;
    nodeBaru -> data = dataBaru
    nodeBaru -> next = NULL;
    if(isEmpty()) {
        head = nodeBaru
        head -> next = NULL;
    }else{
    bantu = head;
    while (bantu -> next != NULL) {
       bantu = bantu -> next;
    }
        bantu -> next = nodeBaru;
    }
    cout<<"\nNO. Urut [" << dataBaru <<"] berhasil ditambahkan ke antrian bagian belakang" << endl;
}
void hapusBelakang(){
    Node* hapus, * bantu;
    int tmp;
    if (!isEmpty()) {
        if(head -> next != NULL) {
            bantu = head;
            while (bantu -> next -> next != NULL) {
                bantu = bantu -> next;
            }
            hapus = bantu -> next;
            tmp = hapus -> data;
            bantu -> next = NULL;
            delete hapus;
        }else{
        tmp = head -> data;
        head = NULL;
        }
        cout <<"\nNO. Urut [" << tmp << "] berhasil dihapus" << endl;
    }else{
    cout << "\nTidak tersedia, mohon untuk menambahkan antrian" << endl;
    }
}
void hapusDepan(){
    Node * hapus;
    int depan;
    if (!isEmpty()) {
        if (head -> next != NULL) {
            hapu = head;
            depan = hapus -> data;
            head = hapus -> next;
            delete hapus;
        }else{
        depan = head -> data;
        head = NULL;
        }
        cout << "\nNO. Antrian depan berhasil dihapus" <<endl;
    }else{
        cout << "\nTidak tersedia, mohon untuk menambahkan antrian" << endl;
    }
}
void tampil(){
if (!isEmpty()){
    Node * bantu;
    bantu = head;
    do{
        cout << "--> ["<< bantu -> data << "]";
        bantu = bantu -> next;
    } while (bantu != NULL);
    cout<<endl;
}else{
    cout << "\nTidak tersedia, mohon untuk menambahkan antrian";"
}
}
int main()
{
    cout << "---------------------------------" << endl;
    cout << "\n Customer Service BANK YEDAM" << endl;
    cout << "---------------------------------" << endl;
    tambahHead(4);
    tampil();
    tambahHead(3);
    tampil();
    tambahHead(2);
    tampil();
    hapusBelakang();
    tampil();
    hapusBelakang(5);
    tampil();
    hapusDepan();
    tampil();
    return 0;

}
