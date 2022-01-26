#include <iostream>
using namespace std;

int f(int x){
    return x + 5;
}
string getTitle(){
    return "Hello World";
}
int main() {
    int a = f(5);
    cout << a << endl;
    string title = getTitle();
    cout << title;
    return 0;
}