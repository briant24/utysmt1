#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;

void printArrayString(int size, string array[]){
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}
int main(){
    int pilihan;
    while (pilihan!=3)
    {
    int size = 1;
    string name[size]={};
    string desc[size]={};
    int price[size]={};
    string nama;
    string desk;
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
      while (name[0]!= "")
      {
      for (int i = 0; i < size; i++){
      cout << "Nama makanan : ";
      cin >> nama;
      name[i] = nama;
      cout << "Deskripsi : ";
      cin >> desk;
      desc[i] = desk;
      cout << "Price : Rp ";
      cin >> harga;
      price[i] = harga;
      }  
    }do
    {
        size = size+1;
    } while (0);
    
      cout << "Makanan berhasil ditambahkan!" << endl;
         break;
      case 2 :
      cout << "--------------------"<< endl;
      cout << "List Makanan" << endl;
      printArrayString(size, name);
      for (int i = 0; i < size; i++)
    {
        cout << "Nama : " << name[i] << endl;
        cout << "Deskripsi : " << desc[i] << endl;
        cout << "Price : Rp " << price[i] << endl;
        printArrayString(size, name);
    }do
    {
        size = size+1;
    } while (0);
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