#include "Queue.h"

void push_queue(int data)
{
    Node *current = (Node*)malloc(sizeof(Node));
    current->data = data;
    //Check if queue is not empty
    if(Head == NULL)
    {
        Head = current;
        Head->ptr = NULL;
        Head_Next = current;
        Head_Next->ptr = NULL;
    }
    else
    {
        Head_Next->ptr = current;
        Head_Next = current;
        Head_Next->ptr = NULL;
    }
}
void pop_queue(void)
{
    //Remove from head
    Node *next_head;
    next_head = Head->ptr;
    free(Head);
    Head = next_head;
}
void print_queue(void)
{
    Node *temp = (Node*)malloc(sizeof(Node));
    int i = 1;
    temp = Head;
    while(temp != NULL)
    {
        printf("Node%d: %d\n",i,temp->data);
        i++;
        temp = temp->ptr;
    }
}

int main()
{
    push_queue(10);
    push_queue(20);
    push_queue(30);
    pop_queue();
    pop_queue();
    print_queue();
    return 0;
}