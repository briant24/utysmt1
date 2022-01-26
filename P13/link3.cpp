#include <iostream>
using namespace std;

struct Node{
    int price;
    Node *next;
};
void printAll(Node head){
    while (&head != NULL)
    {
        cout << head.price << endl;
        head = *head.next;
    }
    
}
void tambah(Node head, Node nft){
    Node *last = &head;

    while (last->next != NULL)
    {
        last = last ->next;
    }
    last -> next = &nft;
}
int main(){
    Node head;
    Node nft1;
    Node nft2;
    head.price = 1000;
    head.next = &nft1;
    nft1.price = 5000;
    nft1.next = NULL;
    nft2.price = 7000;
    nft2.next = NULL;
    tambah(head, nft2);
    printAll(head);
    return 0;
}