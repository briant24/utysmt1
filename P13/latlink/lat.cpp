#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head;

Node* createNode(int data){
    Node *node = (Node *)malloc(sizeof(Node));
    node -> data = data;
    node -> next = NULL;

    return node;
}

void insertFront(Node * node){
    if (head == NULL)
    {
        head = node;
        return;
    }
    node->next = head;
    head = node;
}

void insertTail(Node * node){
    if (head == NULL)
    {
        head = node;
        return;
    }
    
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp ->next;
    }
    temp ->next = node;
}

void forwardTraversal(){
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data <<endl;
        temp = temp -> next;
    }
}


int main(){
    head = NULL;

    Node *node1 = createNode(2);
    Node *node2 = createNode(4);
    Node *node3 = createNode(6);
    Node *node4 = createNode(1);

    insertFront(node1);
    insertTail(node3);
    insertFront(node2);
    insertTail(node4);

    forwardTraversal();
    return 0;
}