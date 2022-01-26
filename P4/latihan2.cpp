#include <iostream>
using namespace std;

int main() {
    string nama = "Briant";
    nama.append(" Audiera");
    cout << nama << endl;
    cout << "Panjang string : " << nama.length() << endl;
    cout << "Hapus nama..." << endl;
    nama.erase();
    cout << nama << endl;
    cout << "Panjang string : " << nama.length() << endl;
    nama.assign("Briant");
    cout << "Panjang string : " << nama.length() << endl;
    cout << "Bandingkan string : " << nama.compare("Abcdefgh") << endl;
    return 0;
} 