#include <iostream>
//#define MAX 10
using namespace std;


//no. 3
//void display(){
    //struct node *bantu;
    //bantu = first;
    //if(isEmpty()==0){
        //while(bantu!=NULL){
            //printf("%d ->", bantu->info);
            //bantu=bantu->link;
        //}printf("NULL");
        //printf("\n");
    //}else printf("\n Data Kosong Silahkan Diisi");
    //getch();
    //{
        //menu();
    //}
//}

//no. 5

//struct queue{
    //int top;
    //int tail;
    //string data[MAX];
//}antrian;
//string data;
//void init() {
    //antrian.top=0;
    //antrian.tail=0;
//}
//bool isEmpty(){
    //return antrian.tail == 0;
//}
//bool isFull(){
    //return antrian.tail == MAX;
//}
//void enqueue(){
    //if (isEmpty()) {
        //init();
    //}
    //if (isFull()) {
        //cout<<"Mohon Maaf Antrian sudah penuh, silahkan kembali besok pagi"<<endl;
    //}else{
        //cout<<"Input Nama : ";
        //cin >> data;
        //antrian.data[antrian.tail] = data;
        //antrian.tail++;
        //cout << "Nama " << data << " telah ditambahkan ke antrian"<< endl;
    //}
//}
//void dequeue(){
    //if(isEmpty()){
        //cout<<"Antrian saat ini sedang kosong"<<endl;
    //}
    //else{
        //cout<< "Nama "<< antrian.data[antrian.top]<<"dapat mengambil toga ke panitia"<<endl;
        //for(int i = antrian.top; i < antrian.tail; i++)
            //antrian.data[i] = antrian.data[i+1];
        //antrian.tail--;
    //}
//}
//void clear(){
    //antrian.top = 0;
    //antrian.tail = 0;
//}

//void tampil(){
    //if(isEmpty()){
        //cout<<"Antrian saat ini sedang kosong"<<endl;
    //} else{
        //cout << "Daftar Penerima : " << endl;
        //for (int i = antrian.top; i < antrian.tail; i++)
            //cout << antrian.data[i]<< " - ";
        //cout<<endl;
    //}
//}
//int main(){
    //int pilih;
    //cout<<"Silahkan pilih nomer"<<endl;
    //do{
        //cout<<endl;
        //cout<<"\n -----------------------------------------------------"<<endl;
        //cout<<"\n Pendaftaran Pengambilan Toga Wisuda UDINUS Tahun 2021"<<endl;
        //cout<<"\n -----------------------------------------------------"<<endl;
        //cout<<"\n Silahkan pilih nomer"<<endl;
        //cout<<"\n 1. Input Nama"
        //<<"\n 2. Ambil Antrian"
        //<<"\n 3. Lihat Daftar Antrian"
        //<<"\n 4. Hapus Pilihan"
        //<<"\n 5. Keluar Dari Antrian"
        //<<"\n -----------------------------------------------------"
        //<<"\n Pastikan anda sudah melunasi tagihan keuangan di BIKU"
        //<<"\n -----------------------------------------------------"
        //<<"\n \n Masukkan Pilihan : ";
        //cin >> pilih;
        //switch (pilih) {
        //case 1:
            //cout<<endl;
            //enqueue();
            //break;
        //case 2:
            //cout<< endl;
            //dequeue();
            //break;
        //case 3:
            //tampil();
            //break;
        //case 4:
            //clear();
            //tampil();
            //break;
        //default:
            //cout<<"Ulangi lagi"<<endl;
            //break;
        //}
    //}while(pilih!=5);
//}
//no. 4
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
void tambahHead (int tambahkanHead) {
    Node * tambahkan;
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
            cout << "\nTidak tersedia, mohon untuk menambahkan antrian";
        }
}
int main()
{
    cout << "---------------------------------" << endl;
    cout << "\n TAMBAH NODE DARI BELAKANG" << endl;
    cout << "\n ---------------------------------" << endl;
    tambahHead(4);
    tampil();
    tambahHead(3);
    tampil();
    tambahHead(2);
    tampil();
    tambahHead(1);
    tampil();
    return 0;

}
