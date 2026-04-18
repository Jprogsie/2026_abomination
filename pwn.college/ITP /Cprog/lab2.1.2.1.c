
/** CODE: add main function with int argc and char * argv[] for the parameters */


/** CODE: print the name of the binary (argument 0 is the name of the program) */

/** CODE: if argc > 1 then print argument 1 else print "no user arguments received" */


/** CODE: do scanf */
/** CODE: print the value received followed by a newline */


  

/** CODE: use getchar to get the character and put it into a variable  */
/** CODE: print the character entered and a newline */

/** CODE: if character = 't' then print "that's great!!!!\n"             */

// CODE return 0

/** CODE: end of main. */


#include <stdio.h>

int main(int argc, char *argv[]) {

    printf("%s\n",argv[0]);
    
    if (argc > 1) {
        printf("%s\n", argv[1]);
    }
    else {puts("no user argument received");}
    
    int num;
    printf("Enter a number: ");  
    scanf("%d", &num);
    
    printf("%d\n", num);
    getchar();
    printf("Enter a character: ");  
    char c = getchar();

    printf("%c\n", c);

    if (c == 't') {
        printf("that's great!!!!\n");
    }


    return 0;
}