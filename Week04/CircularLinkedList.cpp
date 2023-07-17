#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void initNode(Node *tmpHead, int n) {
    tmpHead->data = n;
    tmpHead->next = tmpHead;
};

void displayNodes(Node *tmpHead) {
    Node *cur = tmpHead;
    if (cur == NULL)
        cout << "Nothing to display!";
    else {
        do {
            cout << cur->data << " ";
            cur = cur->next;
        } while (cur != tmpHead);
    }
    cout << endl;
}

void addNode(Node *tmpHead, int n) {
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = tmpHead;
    Node *cur = tmpHead;
    do {
        cur = cur->next;
    } while (cur->next != tmpHead);
    cur->next = newNode;
};

void removeFront(Node **tmpHead) {
    if (*tmpHead == NULL)
        cout << "Empty! Cannot remove!";
    else if ((*tmpHead)->next == *tmpHead) {
        delete *tmpHead;
        *tmpHead = NULL;
    }
    else {
        Node *cur = *tmpHead;
        do {
            cur = cur->next;
        } while (cur->next != *tmpHead);
        *tmpHead = (*tmpHead)->next;
        delete cur->next;
        cur->next = *tmpHead;
    }
}

int main() {
    Node *head = new Node;
    initNode(head, 22);
    displayNodes(head);
    addNode(head, 33);
    addNode(head, 44);
    displayNodes(head);
    removeFront(&head);
    displayNodes(head);
    return 0;
}