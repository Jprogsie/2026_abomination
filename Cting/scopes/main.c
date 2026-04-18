#include <stdio.h>

#define NAME "Apoorv\n" // Not even C bruv 😂 its preprocessor directive!!!

/*

    #define is a preprocessor directive

    [your .c file → preprocessor → expanded .c file → compiler → assembly → linker → binary]

    ! you can see your preprocessor out by 
    
    * gcc -E program.c
    * its just text substitution not an expression, no data type. Just text. 

*/

char msg[] = "Don't get caught in the traffic like froggo";

int main() {

    char nickname[] ="A1THEWORST";
    printf(NAME); 
    // printf(nickname); // its not a string literal like NAME is because name is a string 
                         //literal which we didn't store in a variable

    return 0;
}