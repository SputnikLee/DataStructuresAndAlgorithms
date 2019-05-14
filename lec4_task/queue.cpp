#include "queue.h"
#include <stdlib.h>
#include <stdio.h>

bool CreateQueue(Queue *queue, int size) {
    if (size <= 0)
        return false;
    queue->values = (double *) malloc(sizeof(double) * size);
    queue->front = 0;
    queue->rear = -1;
    queue->counter = 0;
    queue->maxSize = size;
    return true;
}
//– Creates an empty queue whose capacity is size

bool IsEmpty(Queue *queue) {
    if (queue->counter == 0)
        return true;
    else return false;
}
//– Returns true if the queue is empty and false otherwise

bool IsFull(Queue *queue) {
    if (queue->counter == queue->maxSize)
        return true;
    else return false;
}
//– Returns true if the queue is full and false otherwise

bool Enqueue(Queue *queue, double x) {
    if (IsFull(queue)) {
        printf("Error: the queue is full.\n");
        return false;
    }

    queue->rear = (queue->rear + 1) % queue->maxSize;
    queue->values[queue->rear] = x;
    queue->counter++;
    return true;
}
//– Adds a new element with value x to the rear of the queue
//– Returns true if the operation is successful and false otherwise

bool Dequeue(Queue *queue, double *x) {
    if (IsEmpty(queue))
        return false;
    *x = queue->values[queue->front];
    queue->values[queue->front] = 0;
    queue->front = (queue->front + 1) & queue->maxSize;
    queue->counter--;
    return true;
}
//– Removes an element from the front of the queue
//– Returns true if the operation is successful and false otherwise
// – Passes the value of the front element to x

void DisplayQueue(Queue *queue) {
    if (IsEmpty(queue))
        printf("The queue is empty");
    else {
        printf("front -->");
        for (int i = queue->front, count = 0; count < queue->counter; i = (i + 1) % queue->maxSize, ++count) {
            if (count) printf("\t\t");
            printf("\t%g", queue->values[i]);
            if (count == queue->counter) printf("\t\t<--rear\n");
            else printf("\n");
        }
    }
}
//– Prints all the elements of the queue

void DestroyQueue(Queue *queue) {
    free(queue->values);
    queue->front = 0;
    queue->rear = 0;
    queue->counter = 0;
    queue->maxSize = -1;
}
//– Frees the memory occupied by the queue