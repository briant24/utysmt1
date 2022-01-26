#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
};

Node *head;


int main(){
    head = NULL;

    Node *node1 = (Node *)malloc(sizeof(Node));
    Node *node2 = (Node *)malloc(sizeof(Node));

    node1 ->data = 5;
    node1 ->left = head;
    node1 ->right = node2;
    head = node1;

    node2 ->data = 7;
    node2 -> left = node1;
    node2 ->right = NULL;

    cout << head->data << endl;
    cout << head->right->data<< endl;
    return 0;
}