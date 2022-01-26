#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
};

Node *head;

Node* createNode(int data){
    Node *node = (Node *)malloc(sizeof(Node));
    node -> data = data;
    node -> left = NULL;
    node -> right = NULL;

    return node;
}

int main(){
    head = NULL;

    Node *node1 = createNode(6);
    Node *node2 = createNode(8);


    node1 ->left = head;
    node1 ->right = node2;
    head = node1;

    node2 -> left = node1;

    cout << head->data << endl;
    cout << head->right->data<< endl;
    return 0;
}