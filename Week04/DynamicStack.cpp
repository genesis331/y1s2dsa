#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

bool isEmpty(Node *tmpTop) {
    return (tmpTop == NULL);
}

void displayNodes(Node *tmpTop) {
    Node *cur = NULL;
    cur = tmpTop;
    if (isEmpty(tmpTop)) {
        cout << "List is empty!" << endl;
    } else {
        while (cur) {
            cout << cur->data << " ";
            cur = cur->next;
        }
        cout << endl;
    }
}

void push(Node **tmpTop, int n) {
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = *tmpTop;
    *tmpTop = newNode;
}

int pop(Node **tmpTop) {
    int data = -1;
    if (isEmpty(*tmpTop))
        cout << "Stack is Empty\n";
    else {
        Node *oldTop = *tmpTop;
        *tmpTop = oldTop->next;
        data = oldTop->data;
        delete oldTop;
    }
    return data;
}

int stackSize(Node *tmpTop) {
    int count = 0;
    Node *cur = tmpTop;
    while (cur) {
        count++;
        cur = cur->next;
    }
    return count;
}

int main() {
    Node *top = new Node;
    top = NULL;
    push(&top, 22);
    push(&top, 33);
    push(&top, 44);
    displayNodes(top);
    cout << pop(&top) << endl;
    displayNodes(top);
    cout << stackSize(top) << endl;
    return 0;
}