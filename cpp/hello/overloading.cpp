#include <iostream>
using namespace std;

void getMessage(string message){
    cout << "halo, ini pesan" << message << endl;
}
void getMessage(int angka){
    cout << "halo, ini " << angka << endl;
}
void getMessage(){
    cout << "Non Para,"<< endl;
}
void getMessage(int angka, string pesan){
    cout << "halo, ini " << angka << pesan << endl;
}

int main(){
    getMessage(" peringatan");
    getMessage(17);
    getMessage();
    getMessage(18, " multi param");
    return 0;
}