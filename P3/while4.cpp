#include <iostream>
using namespace std;
int main() {
    string input = "No";
    cout << "Input [YES/NO] = ";
    cin >> input;
    while (input == "yes"||input == "Yes"|| input == "YES")
    {
        cout << "Input [YES/NO] = ";
        cin >> input;
    }
    
    return 0;
}
