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
    for (int i = stack->top; i >= 0; --i) {
        printf("%c", stack->values[i]);
    }
}

void DestroyStack(Stack *stack) {
    free(stack->values);
    stack->top = -1;
}

char *Uncompress(char *str) {
    if (str == NULL) return NULL;
    char s1[10000];
    char a, b;
    Stack stack;
    int len1, i, j, k;
    CreateStack(&stack, 10000);
    for (i = 0; i < strlen(str); ++i) {
        a = str[i];
        if (a != ')')
            Push(&stack, a);
        else {
            for (len1 = 0, Pop(&stack, &b); b != '('; ++len1, Pop(&stack, &b)) {
                s1[len1] = b;
            }
            Pop(&stack, &b);
            for (j = 0; j < (b - '0'); ++j) {
                for (k = len1 - 1; k >= 0; --k)
                    Push(&stack, s1[k]);
            }
        }
    }
    for (i = 0; i < stack.top; ++i)
        str[i] = stack.values[i];
    str[i] = '\0';
    return str;
}

int main(void) {
    char a[10000] ="2(abb3(cd))ef";
    Uncompress(a);
    printf("%s\n",a);
}