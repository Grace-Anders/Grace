#include <stdio.h>
#include <stdlib.h>

//mnt/c/src/C/In_Class/Week3$

void print_false(void) { printf("%s\n", "false"); }

int input;

int isPalindrome(int x){
    //printf("%zu\n", sizeof(x));
    //printf("%d\n", x);
    input = x;

    //int Numbers [ sizeof(x) ]; //was hoping I could just use size of

    int size = 0;
    while (x != 0){
        x /= 10;
        size++;
    }

    printf("%d\n", size);

    if(size!=0){
        int Numbers[size];

        size = 0;
        printf("%d\n", input);
        
        while(input != 0){
            Numbers[size] = input % 10;
            input /= 10;
            size++;

            printf("%d\n", size);
        }
        
        //checking whats being added to array
        for(int i = 0; i < size; i++){
            printf("%d\n", Numbers[i]);
        }

        //printf("%d\n", Numbers[0]); // Checking first
        //printf("%d\n", Numbers[size - 1]); // Checking last

        if(size == 1){
        printf("%s\n", "true");
        }
        else if (size == 2 || size == 3)
        {
            if(Numbers[0] == Numbers[size - 1]){
                printf("%s\n", "true");
            }
            else{
                print_false();
            }
        }
        else if (size == 4 ||size == 5)
        {
            if(Numbers[0] == Numbers[size - 1] && Numbers[1] == Numbers[size - 2]){
                printf("%s\n", "true");
            }
            else{
                print_false();
            }
            
        }
        else if (size >= 6)
        {
            printf("%s\n", "cannot calculate for above 6 digits");
        }
        
    }
    else
    {
        print_false();
    }

    /*
    I reconize that there is a pattern here that is probably abstractable into
    somthing that could check a multitude of digits long...
    however I currently cannot think what that would look like.
    */

}

int main(void){

    isPalindrome(1);//1 digits
    isPalindrome(10);//2 digits
    isPalindrome(121);//3 digits
    isPalindrome(-121);//dosn't work
    isPalindrome(1221);//4 digits
    isPalindrome(12321);//5 digits
    isPalindrome(123321);//6 digits
}

/*
Though I aware this is disgusting from a coding angle, I wanted to get somthing working even if it is horendus and hardcoded

I will most defintly come back to this at a later date and hope I can come up with a solution that can calculate for this no matter the digit lenght
*/