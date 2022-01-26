#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

int main()
{
    Node head;
    Node node1;
    Node node2;

    head.data = 5;
    head.next = &node1;

    node1.data = 7;
    node1.next = &node2;

    node2.data = 2;
    node2.next = NULL;

    cout <<"Head data berisi "<< head.data << endl;
    cout <<"Node 1 berisi "<< head.next->data << endl;
    cout <<"Node 2 berisi "<< head.next->next->data << endl;
    return 0;
}