#include <stdio.h>
#include <stdlib.h>
#include "list.h"

#define MAX 10000

bool IsEmpty(Node *head) {
    if (head) return false;
    else return true;
}

/*
 function:
	tests whether a list is empty
 input:
	head - pointer to the first node
 output:
	true if the list is empty and false otherwise
*/

Node *InsertNode(Node **phead, int index, double x) {
    if (index < 0) return 0;
    int currIndex = 1;
    Node *currNode = *phead;
    while (currNode && index > currIndex) {
        currNode = currNode->next;
        currIndex++;
    }
    if (index > 0 && currNode == 0) return 0;
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode->data = x;
    if (index == 0) {
        newNode->next = *phead;
        *phead = newNode;
    } else {
        newNode->next = currNode->next;
        currNode->next = newNode;
    }
    return newNode;
}

/*
 function:
	inserts a new node with certain data after a certain position
 input:
	phead - pointer to the pointer to the first node
	index - the new node is inerted after position index
			insert a new node as the head if index=0
	x - data of the new node
 output:
	a pointer to the new node if insertion is successful and NULL otherwise
*/

int FindNode(Node *head, double x) {
    int position = 0;
    Node *p = head;

    while (p) {
        position++;
        if (p->data == x)
            return position;
        p = p->next;
    }
    return 0;
}

/*
 function:
	finds node with certain data
 input:
	head - pointer to the first node
	x - the first node whose data=x is returned
 output:
	returns the position of the first node whose data=x
	returns 0 if no such node exists
*/

int DeleteNode(Node **phead, double x) {
    int position = 0;
    Node *p;
    Node *next = *phead;

    do {
        position++;
        if (next->data == x) {
            if (position == 0) **phead = *next->next;
            else p->next = next->next;
            free(next);
            return position;
        }
        p = next;
        next = p->next;
    } while (next);

    return 0;
}

/*
 function:
	deletes a node with certain data
 input:
	phead - pointer to the pointer to the first node
	x - the first node whose data=x is deleted
 output:
	returns the position of the deleted node
	returns 0 if no such node exists
*/

void DisplayList(Node *head) {
    node *p = head;
    while (p) {
        printf("%0.2lf\t", p->data);
        p = p->next;
    }
    printf("\n");
}

/*
 function:
	prints all the nodes in the list
 input:
	head - pointer to the first node
*/

void DestroyList(Node *head) {
    node *p;
    while (head) {
        p = head;
        head = head->next;
        free(p);
    }
}
/*
 function:
	deletes all the nodes in the list and frees the memory occupied by them
 input:
	head - pointer to the first node
*/

void InverseNodes(Node** phead){

}
/*
– Inverse the order of all the elements in a
        linked list.
*/

void RemoveDuplicates(Node** phead){
    Node* p = *phead;
    while(p){
        DeleteNode(p->next,p->data);
    }
}
/*
Deletes all nodes that have duplicate values, leaving only nodes with distinct values
You may assume that the node values are non-decremental in this method
 */

int main() {
    Node *head = 0;
    for (int i = 0; i < 5; i++)
        InsertNode(&head, i, i);

    DisplayList(head);
    for (int i = 0; i < 5; i++)
        InsertNode(&head, 0, i);
    DisplayList(head);
    for (int i = 0; i < 7; i += 2) {
        int idx = FindNode(head, i);
        if (idx > 0)
            printf("%d is at position %d.\n", i, idx);
        else
            printf("%d is not in the list.\n", i);
    }
    DeleteNode(&head, 0);
    DisplayList(head);
    DestroyList(head);
}