#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void initNode(Node *tmpHead, int n) {
    tmpHead->data = n;
    tmpHead->next = NULL;
};

void displayNodes(Node *tmpHead) {
    Node *cur = tmpHead;
//    cur = tmpHead;
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
    while (cur) {
        if (cur->next == NULL) {
            cur->next = newNode;
            break;
        }
        cur = cur->next;
    }
}

void removeNode(Node *tmpHead) {
    Node *cur = tmpHead;
    while (cur) {
        if (cur->next->next == NULL) {
            delete cur->next;
            cur->next = NULL;
            break;
        }
        cur = cur->next;
    }
}

void addFront(Node **tmpHead, int n) {
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = *tmpHead;
    *tmpHead = newNode;
}

void removeFront(Node **tmpHead) {
    Node *oldHead = *tmpHead;
    if (oldHead->next != NULL) {
        *tmpHead = oldHead->next;
        delete oldHead;
    } else {
        cout << "removeFront() aborted!\n";
    }
}

int countTotalNodes(Node *tmpHead) {
    Node *cur = tmpHead;
    int count = 0;
    while (cur) {
        cur = cur->next;
        count++;
    }
    return count;
}

int searchNodePos(Node *tmpHead, int n) {
    Node *cur = tmpHead;
    int pos = 1;
    while (cur) {
        if (cur->data == n) {
            break;
        }
        pos++;
        cur = cur->next;
    }
    if (cur == NULL) {
        pos = -1;
    }
    return pos;
}

void addNodeAt(int pos, Node **tmpHead, int n) {
    if (pos == 1) {
        addFront(tmpHead, n);
    } else {
        Node *newNode = new Node;
        newNode->data = n;
        Node *cur = *tmpHead;
        int k = 1;
        while ((cur != NULL) && (k < (pos - 1))) {
            cur = cur->next;
            k++;
        }
        newNode->next = cur->next;
        cur->next = newNode;
    }
}

void removeNodeAt(int pos, Node **tmpHead) {
    if (pos == 1) {
        removeFront(tmpHead);
    } else {
        Node *cur = *tmpHead;
        int k = 1;
        while ((cur != NULL) && (k < (pos - 1))) {
            cur = cur->next;
            k++;
        }
        if (cur->next->next == NULL) {
            delete cur->next;
            cur->next = NULL;
        } else {
            Node *oldNode = cur->next;
            cur->next = cur->next->next;
            delete oldNode;
        }
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