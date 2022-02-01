#include <stdio.h>

//Compile: (no output is good!)
//gcc main.c -o app 

//Run App:
// ./app

// How printf works _____________

void real_printf(const char *s)
{
    while(*s != '\0')
    {
        putchar(*s);
        s++;
    }
}
// ______________________________

void foo(const char *str) { printf("%s", str); }

//to not pass though anything () has to have "void" otherwise it can accept anything!!
int main(void){

    /*
        print f takes in a format (ex: "%s")
        and a collection of arguments (ex: "Hello World")
    */
    printf("%s", "\tHello World\n\0");
    foo("Hello World\0");
    /* 
        \n newline
        \t (place before) tab
        \0 terminates a string (some comilers will add this automatically, but it is still best practice)

        * overloaded opperated pointer or 
        derefrence (goes to memory adress and grabs what is there)
    */
}

 