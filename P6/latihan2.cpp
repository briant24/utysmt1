#include <iostream>
using namespace std;

struct Person
{
    string nama;
    string alamat;
    int usia;
};

int main(){
    Person person;
    cout << "Masukkan nama : " ;
    cin >> person.nama;
    cout << "Masukkan alamat : " ;
    cin >> person.alamat;
    cout << "Masukkan usia : " ;
    cin >> person.usia;
    cout << "================" << endl;
    cout << "Biodata" << endl;
    cout << "Nama : "<< person.nama << endl;
    cout << "Alamat : "<< person.alamat << endl;
    cout << "Usia : " << person.usia << endl;
    return 0;
}