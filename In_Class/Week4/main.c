#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//size_t:
//size_t sizef(blah)

int main()
{
    //1024: size of the array we want | sizeof(int): data type
    int *int_array = (int *)malloc(1024 * sizeof(int)); //Malloc has you do the multiplication yourself
    /*
    You multiply 1024 by the sizeof an int so you have the correct amout of space
    Otherwise you'd have 1/4 the space needed
    */
//under the hood:
//int z = (*int_array + 1);
    int y = int_array[1];

    //int *ptr = (int *)calloc(1024, sizeof(int)); //Calloc dose the multiplication for you

    //for (size_t i = 0; i < (1024 * sizeof(int)); 1++)
    //{
    //    printf("%d\n, prt[i]");
    //}

    //realloc(ptr, 10240 * sizeof(int));

    //realloc(ptr, 10240 * sizeof(int));

    char* str = "hello world\0";

    for(size_t i = 0; i < 10; i++)//Prints out the ANSI Character Code of the characters
    {
        printf("%d", str[i]);
    }

    //Number Palimdromes

    int is_palindrom(const int n)
    {
        int current = n;
        int r = 0;
        while(n > 0)
        {
            int tmp = n % 10;// % = division
            r = r * 10 + tmp; // multiply by 10 to move it to the next 10's place
            n = n / 10; // cuts n down to its next 10's place
        }
        return current == r;
    }

