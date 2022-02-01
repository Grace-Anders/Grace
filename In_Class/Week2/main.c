#include <stdio.h>

//Compile: (no output is good!)
//gcc main.c -o app 

//Proper Compile Statment:
//gcc -o app -std=c99 -Wall -Wextra -Werror -pedantic -O2 main.c

/* Difference between * and &

    *: To get a value from a pointer

    &: To get a pointer from a value

*/

/* main_ : in main module 
void main_foo(void);
void main_bar(int);
int main_baz(int);
*/

//Function that takes in any pointer | void is a type in C (dose not mean nothing)
//void *get(void * id){}

/*Pass by Value

    C# MS: Most everything is passed by value
 */
void by_value(int n){
    n++;
}

/*Pass by Refrence

   C# MS: If and instance of a class is passed it is considered a refrence type
*/
void by_refrence(int *n)
{
    (*n)++;
}

/* XXX Returing memeory outside of a function (undefined behavior can crash app)

int *bad(void){
    int n = 10;
    return &n;
}
*/
int main(void)
{
    //print Hello World
    printf("%s", "Hello World\n");

    /*if loop _______________________________________

    if(1 == 1)//No booleans in C only 0 and 1
    {
        printf("%s", "The World Makes Sense");
    }
    else if(1 == 2){
        printf("%s", "Please Stop");
    }
    else{
       printf("%s", "What on Earth have you Done!!"); 
    }

    //for loop _____________________________________

    for (int i = 0; i < 10; i++)  //i not working currently
    {
        printf("%s", "Ping");
    }
    
    //while loop ___________________________________

    while(1==1){
        printf("%s", "runs forever");
    }

    do{
        printf("%s", "runs once");
    }while (1==2);
    */

/* By Value vs. By Reffrence
   int n = 100;

   by_value(n);
   printf("%d\n", n);
   // = 100

   by_refrence(&n);
   printf("%d\n", n);
   // = 101
*/

/* XXX This writes to memory we don't have access to

    int *n = bad();

    (*n) = 100;

    printf("%d", *n);
    // = resuls in error: terninated by signal SIGSEGV
*/
}

