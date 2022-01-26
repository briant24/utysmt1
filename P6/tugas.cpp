#include <iostream>
using namespace std;
int main(){
  string input;
  int size = 2;
  string nama[size]={};
  for (int i = 0; i < size; i++)
    {
        cout << "Masukkan nama mhs : ";
        cin >> input;
        nama[i] = input;
    }
  for (int i = 0; i < size; i++)
    {
        cout << "Nama mhs adalah " << nama[i] << endl;
    }
  return 0;
}
