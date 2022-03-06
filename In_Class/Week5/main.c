#include <stdio.h>
#include <stdlib.h>
//mnt/c/src/C/In_Class/Week5$

//struct is logically grouped data arround one data address
typedef struct Node
{
    //int data;
    //struct Node * next;

    integral data;
    struct Node *next;

} NodeT;

NodeT * init(const int val)
{
    NodeT * newNode = (NodeT *)malloc(sizeof(NodeT));

    newNode->data = val;
    newNode->next = NULL;
    return newNode;
}
// -> : derefrence and access field

NodeT *destroy(NodeT * node){
    NodeT* next = node->next;
    free(node);
    return next;
}

void append(NodeT **head, const int val)
{
    NodeT * newNode = init(val);

    NodeT *last = *head;

    if(*head == NULL)
    {
        *head = newNode;
        return;
    }

    while(last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
}

//function to print whole list

void print(NodeT**head){
    
    NodeT* last = *head;

    while(last->next != Null){
        printf ("%d\n", last->data);
        last = last->next;
    }
    printf("%d\n", last->data);
}

 

void getnth(NodeT** head, const int idx)
{
    NodeT*last = *head;

    int count = 0;

    while(last->next != Null)
    {
        if(count == idx)
        {
            return last->data;
        }
        last = last->next;
        count++;
    }
    return -1;
}

int main()
{
    //Constant Time 0(1)
    //Linear Time 0(n)
    //Exponential Time 0(n^x)

    //int *arry = (int *)malloc(sizeof(int) * 10);
    //free(arry);
    
    //* points to arrays
    //** (double pointer) : points to other arrays?

    //No difference bettween a pointer or an array
    //An array is just a continious block of memory seperated into blocks

    NodeT * head = init(1);

    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
}

void foo()
{
    char *s = "hello world";// char *s points to "h"
    char **s2;

    s2[0] = "Hello World";
    s2[1] = "Goodbye";
}