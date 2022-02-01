#include <stdio.h>

//Compile: (no output is good!)
//gcc main.c -o app 

//Run App:
// ./app

//to not pass though anything () has to have "void" otherwise it can accept anything!!
int main(void){

    /*
        print f takes in a format (ex: "%s")
        and a collection of arguments (ex: "Hello World")
    */
    printf("%s", "\tHello World\n\0");

    /* 
        \n newline
        \t (place before) tab
        \0
    */
}
 