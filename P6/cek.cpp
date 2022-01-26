#include <iostream>
#include <stdlib.h>
using namespace std;

struct Menu
{
    string name[5]={};
    string desc[5]={};
    int price[5]={};
};

int main(){
    int pilihan;
    Menu menu;
    menu.name;
    menu.desc;
    menu.price;
    while (pilihan!=3)
    {
    int size = 2;
    string nama = "";
    string desk = "";
    int harga;
    cout << "====================" << endl;
    cout << "Selamat datang di Resto UTY" << endl;
    cout << "Pilih Menu:" << endl;
    cout << "[1] Tambah makanan" << endl;
    cout << "[2] Tampilkan semua makanan" << endl;
    cout << "[3] Keluar" << endl;
    cout << "Pilihan: ";
    cin >> pilihan;

    switch(pilihan) {
      case 1 :
      cout << "--------------------"<< endl;
      for (int i = 0; i < size; i++){
      cout << "Nama makanan : ";
      cin >> nama;
      menu.name[i] = nama;
      cout << "Deskripsi : ";
      getline(cin >> ws,desk);
      menu.desc[i] = desk;
      cout << "Price : Rp ";
      cin >> harga;
      menu.price[i] = harga;
      }
      
      cout << "Makanan berhasil ditambahkan!" << endl;
         break;
      case 2 :
      if (menu.name[1] != ""){
      cout << "--------------------"<< endl;
      cout << "List Makanan" << endl;
      for (int i = 0; i < size; i++)
    {
        cout << "Nama : " << menu.name[i] << endl;
        cout << "Deskripsi : " << menu.desc[i] << endl;
        cout << "Price : Rp " << menu.price[i] << endl;
    }
      }else {
          cout << "Makanan tidak ditemukan, silahkan input terlebih dahulu"<<endl;
      }
    break;
      case 3 :
            exit(0);
         break;
      default :
         cout << "Masukkan tidak valid" << endl;
         exit(0);
         break;
    }
   }
    return 0;
}