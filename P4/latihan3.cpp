#include <iostream>
using namespace std;

int main() {
    /*if (5 > 2)
    {
        cout << "Makan" << endl;
    } */
    // string status;
    // cout << "Apakah kamu haus? " <<endl;
    // cin >> status;
    // if (status.compare("haus") == 0)
    // {
    //     cout << "Minum" << endl;
    // }
    int usia;
    cout << "Masukkan usia : " ;
    cin >> usia;
    if (usia >= 20 && usia < 35)
    {
        cout << "Silahkan masuk..." << endl;
    }else if(usia >= 35 && usia <=100){
        cout << "Jompoooooo" << endl;
    }
    else{
        cout << "Dilarang" << endl;
    }
       
    return 0;
}