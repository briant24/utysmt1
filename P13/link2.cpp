#include <iostream>
using namespace std;

struct Node
{
    string name;
    Node *next;
};

void printAll(Node head){
    while (&head != NULL)
    {
        cout << head.name << endl;
        head = *head.next;
    }
    
}

int main(){
    Node head;
    Node node1;
    Node node2;
    Node node3;
    head.name = "Briant";
    head.next = &node1;
    node1.name = "Audiera";
    node1.next = &node2;
    node2.name = "Ganesh";
    node2.next = &node3;
    node3.name = "Wara";
    node3.next = NULL;

    cout << "----------------------"<<endl;
    printAll(head);

    return 0;
}