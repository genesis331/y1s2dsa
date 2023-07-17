#include <iostream>
using namespace std;

#define MAX_SIZE 5

struct Stack {
    int data[MAX_SIZE];
    int top;
};

void initStack(Stack *aStack) {
    for (int k=0; k<MAX_SIZE; k++) {
        aStack->data[k] = 0;
        aStack->top = -1;
    }
}

bool isEmpty(Stack *aStack) {
    return (aStack->top < 0);
}

bool isFull(Stack *aStack) {
    return (aStack->top == (MAX_SIZE-1));
}

void displayStack(Stack *aStack) {
    if (isEmpty(aStack))
        cout << "Stack is empty.";
    else {
        for (int k=0; k<=aStack->top; k++) {
            cout << aStack->data[k] << " ";
        }
        cout << endl;
    }
}

void push(Stack *aStack, int n) {
    if (isFull(aStack))
        cout << "Stack is full.\n";
    else {
        aStack->top++;
        aStack->data[aStack->top] = n;
    }
}

int pop(Stack *aStack) {
    int data = -1;
    if (isEmpty(aStack))
        cout << "Stack is empty.\n";
    else {
        data = aStack->data[aStack->top];
        aStack->top--;
    }
    return data;
}

int stackSize(Stack *aStack) {
    return (aStack->top + 1);
}

int main() {
    Stack *aStack = new Stack;
    initStack(aStack);
    push(aStack, 22);
    push(aStack, 33);
    push(aStack, 44);
    displayStack(aStack);
    cout << pop(aStack) << endl;
    displayStack(aStack);
    stackSize(aStack);
    return 0;
}