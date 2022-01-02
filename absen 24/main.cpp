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

void tambahTengah(int selanjutnya, int dataBaru){
    Node *nodeBaru, *current, *current2;
    nodeBaru = new Node;
    int i;
    bool indikator=false;

    nodeBaru->data = dataBaru;
    nodeBaru->next = NULL;
    nodeBaru->prev = NULL;
    current = head;

    for(i=0; i<10; i++) {
        if(current->data==selanjutnya){
            indikator = true;
            break;
        }
        current = current -> next;
    }
    if(isEmpty()){
        cout<<"data kosong"<<endl;
    }else{
        if(indikator){
            current2 = current -> next;
            nodeBaru -> next = current2;
            nodeBaru -> prev = current;
            current2 -> prev = nodeBaru;
            current -> next = nodeBaru;
            cout<<" berhasil ditambahkan"<<endl;
            if(current == head){
                cout<<"selanjutnya berada di head"<<endl;
            }else if(current == tail){
                cout<<"selanjutnya berada di tail"<<endl;
            }else{
                cout<<"data tidak berada di head dan tail"<<endl;
            }
        }else{
            cout<<"data hilang"<<endl;
        }
    }
}

void hapusTengah(int selanjutnya){
    Node *hapus, *current, *current2;
    hapus = new Node;
    int i;
    bool indikator=false;
    current = head;

    for (i=0; i<10; i++){
        if(current->data == selanjutnya){
            indikator = true;
            break;
        }
        current = current->next;
    }
    if(isEmpty()){
        cout<<" data kosong"<<endl;
    }else{
        if(indikator){
            hapus = current;
            current2 = hapus ->next;
            current = hapus -> prev;
            current->next = current2;
            current2->prev = current;
            cout<<"data"<<selanjutnya<<" berhasil di delete"<<endl;
        } else{
            cout<<"datanya ilang"<<endl;
        }
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
        cout<<"\n         ABSEN 24        "
            << "\n ~~~~~~~~~~~~~~~~~~~~~~~~~"
            <<"\n 1) tambah depan"
            <<"\n 2) tambah belakang"
            <<"\n 3) tambah tengah"
            <<"\n 4) hapus depan"
            <<"\n 5) hapus belakang"
            <<"\n 6) hapus tengah"
            <<"\n 7) tampilkan data"
            <<"\n 8) leave"
            <<"\n ~~~~~~~~~~~~~~~~~~~~~~~~~"
            <<"\n masukkan pilihan :";
            cin>>choose;
            switch(choose){
                case 1:
                    cout<<endl;
                    tambahDepan(4);
                    tambahDepan(8);
                    tambahDepan(16);
                    break;

                case 2:
                    cout<<endl;
                    tambahBelakang(12);
                    tambahBelakang(24);
                    break;

                case 3:
                    tambahTengah(35,49);

                case 4:
                    cout<<endl;
                    tampil();
                    break;

                case 5:
                    cout<<endl;
                    hapusDepan();
                    break;

                case 6:
                    cout<<endl;
                    hapusTengah(49);
                    break;
                case 7:
                    cout<<endl;
                    hapusBelakang();
                    break;
                case 8:
                    break;
                default:
                    cout<<"Perintah salah"<<endl;
                    break;
            }
    }
    while(choose!=0);
}
