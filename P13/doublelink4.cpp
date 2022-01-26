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

void insertFront(Node * node){
    if (head == NULL)
    {
        head = node;
        return;
    }
    head->left = node;
    node->right = head;
    head = node;
}

void insertTail(Node * node){
    if (head == NULL)
    {
        head = node;
        return;
    }
    
    Node *temp = head;
    while (temp->right != NULL)
    {
        temp = temp ->right;
    }
    temp -> right = node;
    node->left = temp;
}

void forwardTraversal(){
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data<< " ";
        temp = temp -> right;
    }
}

void backwardTraversal(){
    Node *temp = head;
    while (temp -> right != NULL)
    {
        temp = temp ->right;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp -> left;
    }
    
    
}

int main(){
    head = NULL;

    Node *node1 = createNode(6);
    Node *node2 = createNode(8);
    Node *node3 = createNode(10);
    Node *node4 = createNode(12);

    insertFront(node1);
    insertFront(node2);
    insertTail(node3);
    insertTail(node4);

    cout << "Dari depan ke belakang" << endl;
    forwardTraversal();
    cout << endl;
    cout << "-----------------------" << endl;
    cout << "Dari belakang ke depan" << endl;
    backwardTraversal();
    return 0;
}