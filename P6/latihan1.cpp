#include <iostream>
using namespace std;

struct Person
{
    string nama;
    string alamat;
    int usia;
};

int main() {
    Person briant;
    briant.nama = "Briant Audiera";
    briant.alamat = "uhuy";
    briant.usia = 18;
    cout << briant.nama << endl;
    return 0;
}