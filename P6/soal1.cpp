#include <iostream>
using namespace std;

struct Sepatu
{
    int harga, ukuran;
    string merk, material, seri;
};


int main(){
    Sepatu sepatu;
    int harga, ukuran;
    string merk, material, seri;
    cout << "Merk sepatu    : " ;
    cin >> merk;
    cout << "Seri sepatu    : " ;
    cin >> seri;
    cout << "Ukuran sepatu  : " ;
    cin >> ukuran;
    cout << "Jenis material : " ;
    cin >> material;
    cout << "Harga sepatu   : " ;
    cin >> harga;
    sepatu.merk = merk;
    sepatu.seri = seri;
    sepatu.ukuran = ukuran;
    sepatu.material = material;
    sepatu.harga = harga;
    cout << "================" << endl;
    cout << "Info Sepatu" << endl;
    cout << "Merk     : "<< sepatu.merk << endl;
    cout << "Seri     : "<< sepatu.seri << endl;
    cout << "Ukuran   : " << sepatu.ukuran << endl;
    cout << "Material : "<< sepatu.material << endl;
    cout << "Harga    : " << sepatu.harga << endl;
    return 0;
}