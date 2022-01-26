#include <iostream>
using namespace std;

void linearSearch(int a[], int n, int j){
    int temp = -1;
    for (int i = 0; i < j; i++)
    {
        if (a[i]==n)
        {
            cout << "data ditemukan pada index ke " << i + 1;
            temp = 0;
            break;
        }
    }
    if (temp == -1)
    {
        cout << "Data tidak ditemukan";
    }
}

int main(){
    cout << "Ingin masukkan berapa data? : ";
    int jumlah;
    cin >> jumlah;
    int arr[jumlah];
    cout << "Masukkan data sejumlah "<< jumlah << endl;
    for (int i = 0; i < jumlah; i++)
    {
        cin >> arr[i];
    }
    cout << "Data yang dicari : ";
    int num;
    cin >> num;
    linearSearch(arr,num,jumlah);
    
    return 0;
}