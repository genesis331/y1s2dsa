#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

void initNode(Node *tmpHead, int n) {
    tmpHead->data = n;
    tmpHead->next = NULL;
    tmpHead->prev = NULL;
};

void displayNodes(Node *tmpHead) {
    Node *cur = tmpHead;
    while (cur) {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}

void addNode(Node *tmpHead, int n) {
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = NULL;
    Node *cur = tmpHead;
    while (cur->next != NULL) {
        cur = cur->next;
    }
    cur->next = newNode;
    newNode->prev = cur;
}

void addFront(Node **tmpHead, int n) {
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = *tmpHead;
    newNode->prev = NULL;
    *tmpHead = newNode;
    newNode->next->prev = newNode;
}

void removeFront(Node **tmpHead) {
    if ((*tmpHead)->next != NULL){
        (*tmpHead) = (*tmpHead)->next;
        delete (*tmpHead)->prev;
        (*tmpHead)->prev = NULL;
    } else {
        cout << "Single Node!";
    }
}

int main() {
    Node *head = new Node;
    initNode(head, 22);
    displayNodes(head);
    addNode(head, 33);
    addNode(head, 44);
    displayNodes(head);
    addFront(&head, 11);
    displayNodes(head);
    removeFront(&head);
    displayNodes(head);
    return 0;
}