#include <iostream>
using namespace std;
string getAccess(int score){
    if (score >= 81 && score <= 100)
    {
        return "Selamat nilai anda A";
    } else if(score >= 61 && score <= 80){
        return "Selamat nilai anda B";
    }else if(score >= 41 && score <= 60){
        return "Selamat nilai anda C";
    }else{
        return "Nilai diluar jangkauan";
    }
}
    int main(){
        int nilai;
        cout << "======Kondisional Penilaian======" << endl;
        cout << "" << endl;
        cout << "Masukkan nilai : ";
        cin >> nilai;
        cout << getAccess(nilai) << endl;
    }