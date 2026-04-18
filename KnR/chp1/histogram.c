#include <stdio.h>

int main()
{
    int c, i;
    int ndigit[10];

    for (i = 0; i < 10; ++i) // iterating over the ndigit array and setting each index default value to 0
        ndigit[i] = 0;

    while ((c = getchar()) != EOF) // Duh, its obvious
        if (c >= '0' && c <= '9') // checking if the character input is '0' - '9'
            ++ndigit[c - '0'];  // increasing the value by one at the index = character input

    puts("\nDigits and histogram = ");
    for (i = 0; i < 10; ++i){
        printf("%d",i);
        // printf(" %d", ndigit[i]);
        for (int j = 0; j < ndigit[i]; j++)
            printf("%d", j);
            // printf("#");
            
        puts("");
    
    }
    
    return 0;
}
