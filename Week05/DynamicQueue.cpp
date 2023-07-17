#include <iostream>
using namespace std;

struct Queue {
    int data;
    Queue *next;
};

bool isEmpty(Queue *tmpFront) {
    return (tmpFront == NULL);
}

void displayQueue(Queue *tmpFront) {
    Queue *cur = NULL;
    cur = tmpFront;
    if (isEmpty(tmpFront)) {
        cout << "Queue is empty!" << endl;
    } else {
        while (cur) {
            cout << cur->data << " ";
            cur = cur->next;
        }
        cout << endl;
    }
}

void enqueue(Queue **tmpFront, int n) {
    Queue *newNode = new Queue;
    newNode->data = n;
    newNode->next = NULL;
    if (isEmpty(*tmpFront)) {
        *tmpFront = newNode;
    }
    else {
        Queue *cur = *tmpFront;
        while (cur->next != NULL)
            cur = cur->next;
        cur->next = newNode;
    }
}

int dequeue(Queue **tmpFront) {
    int data = -1;
    if (isEmpty(*tmpFront)) {
        cout << "Queue is Empty!\n";
    }
    else {
        Queue *oldFront = *tmpFront;
        *tmpFront = oldFront->next;
        data = oldFront->data;
        delete oldFront;
    }
    return data;
}

int queueSize(Queue *tmpFront) {
    int count = 0;
    Queue *cur = tmpFront;
    while (cur) {
        count++;
        cur = cur->next;
    }
    return count;
}

int main() {
    Queue *front = new Queue;
    enqueue(&front, 22);
    enqueue(&front, 33);
    enqueue(&front, 44);
    displayQueue(front);
    cout << "Dequeue: " << dequeue(&front) << endl;
    displayQueue(front);
    cout << "Size: " << queueSize(front) << endl;
    return 0;
}