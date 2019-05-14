#include "stack.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

bool CreateStack(Stack *stack, int size) {
    if (size <= 0)
        return false;
    stack->values = (double *) malloc(sizeof(double) * size);
    stack->top = -1;
    stack->maxTop = size - 1;
    return true;
}

bool IsEmpty(Stack *stack) {
    if (stack->top == -1)
        return true;
    else return false;
}

bool IsFull(Stack *stack) {
    if (stack->top >= stack->maxTop) return true;
    else return false;
}

bool Top(Stack *stack, double *x) {
    if (IsEmpty(stack))
        return false;
    else {
        *x = stack->values[stack->top];
        return true;
    }
}

bool Push(Stack *stack, double x) {
    if (IsFull(stack))
        return false;
    stack->values[++stack->top] = x;
    return true;
}

bool Pop(Stack *stack, double *x) {
    if (IsEmpty(stack))
        return false;
    else {
        *x = stack->values[stack->top];
        stack->values[stack->top--];
        return true;
    }
}


void DisplayStack(Stack *stack) {
    cout << "top -->";
    for (int i = stack->top; i >= 0; --i) {
        cout << "\t\t|\t\t" << stack->values[i] << "\t\t|\n\t";
    }
    cout << "\t\t|---------------|\n";
}

void DestroyStack(Stack *stack) {
    free(stack->values);
    stack->top = -1;
}

