#include <stdio.h>
#include <stdlib.h>
//mnt/c/src/C/In_Class/Week3$

#define MAXBUFFER 1024
#define LEN(array) (sizeof(array) / sizeof(array[0]))

//static const int maxbuffer = 1024;

typedef struct{
    int* arry;
    size_t len;
} Array;

//void foo(int *myArray, size_t len){}

Array *init_array(sixe_t len)
{
    Array *a = (Array*)malloc(sizeof(Array));
    a->len = len;
    a->arry = malloc(len);
    return a;
}

void destroy_array(size_t len){
    if(array != NULL){
        free(array->arry);
        free(array);
    }

}

void foo2(Array *a)
{
    int * localCopy = (int *)a->arry;
    for(size_t i = 0; i < a->len; i++){
        printf("%d\n", localCopy[i])
    }
}

int main(void)
{
    //int x[10];
    //size_t x_len = sizeof(x) / sizeof(int);

    //int x [MAXBUFFER];
    //foo(x, LEN(x));

    //int *x_ptr = x;

    //void *intermediary = x_ptr;

    //long *y_ptr = intermediary;

    //Array a = {.arry = y_ptr, .len = LEN(x)};

    //Array a = {.arry = x, .len = LEN(x)};


    //Always use sizeof function
    //void *a = malloc(sizeof(Array));
    //Array *a = (Array*)malloc(sizeof(Array));

    //foo2(a);

    //Frees memory
    //free(a); //Dosn't clean the data, only frees it
    //a = NULL; //So nulling out the pointer is best practice other wise it is "dangleing"

    Array *a = init_array((MAXBUFFER * sizeof(int)));
    foo2(a);
    destroy_array(a);
    foo2(a);
}