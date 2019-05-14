#include "stack.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

bool CreateStack(Stack *stack, int size) {
    if (size <= 0)
        return false;
    stack->values = (char *) malloc(sizeof(char) * size);
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

bool Top(Stack *stack, char *x) {
    if (IsEmpty(stack))
        return false;
    else {
        *x = stack->values[stack->top];
        return true;
    }
}

bool Push(Stack *stack, char x) {
    if (IsFull(stack))
        return false;
    stack->values[++stack->top] = x;
    return true;
}

bool Pop(Stack *stack, char *x) {
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

bool ValidBrackets(char *str) {
    if(str == NULL) return false;
    Stack stack;
    CreateStack(&stack, strlen(str));
    int i;
    char a, c;
    for (i = 0; i < strlen(str); ++i) {
        c = str[i];
        if (c == '{' || c == '[' || c == '(' || c == '<') Push(&stack, str[i]);
        else {
            if (IsEmpty(&stack))
                return false;
            Pop(&stack, &a);
            switch (c) {
                case '}':
                    c = '{';
                    break;
                case ']':
                    c = '[';
                    break;
                case '>':
                    c = '<';
                    break;
                case ')':
                    c = '(';
                    break;
            }
            if (a != c)
                return false;
        }
    }
    return true;
}

int main(void) {
    char a[100] = "{([]()()}";
    if (ValidBrackets(a))
        printf("YES\n");
    else printf("NO\n");
}