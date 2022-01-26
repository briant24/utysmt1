#include <iostream>
#include <sstream>
#include <conio.h>
using namespace std;

string masukkanAngka(){
    return "Masukkan angka ";
}
int main(){
    string masukan = masukkanAngka();
    int pilihan, angka1, angka2, hasil;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Sisa Hasil Bagi" << endl;
    cout << "Silahkan masukkan angka proses : ";
    cin >> pilihan;
    int menu = pilihan;
    cout << masukan + "pertama ";
    cin >> angka1;
    cout << masukan + "kedua ";
    cin >> angka2;

    switch(pilihan) {
      case 1 :
      hasil = angka1 + angka2;
         cout << hasil << endl; 
         break;
      case 2 :
            hasil = angka1 - angka2;
         cout << hasil << endl; 
         break;
      case 3 :
            hasil = angka1 * angka2;
         cout << hasil << endl; 
         break;
      case 4 :
            hasil = angka1 / angka2;
         cout << hasil << endl; 
         break;
      case 5 :
            hasil = angka1 % angka2;
         cout << hasil << endl; 
         break;
      default :
         cout << "Masukkan tidak valid" << endl;
   }
   cout << "Hasilnya adalah " << hasil << endl;
 
   return 0;

}
