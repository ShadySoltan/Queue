#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *ptr;
}Node;

Node *Head = NULL,*Head_Next = NULL;

void push_queue(int data);
void pop_queue(void);
void print_queue(void);

#endif