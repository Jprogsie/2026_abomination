#include <stdio.h>

int main() {

    /* sprintf(char_array, "format", args...) */

    char buffer[100];
    int score = 420;
    char name[]= "Apoorv";

    sprintf(buffer, "Player: %s | Score: %d", name, score);

    printf("%s\n", buffer);

    /*
    
    But this can cause buffer overflows too 💀 
    Fix - use snprintf();

    */

    char buffer[10];
    snprintf(buffer, sizeof(buffer), "This is too long!!!");
    // Safely truncates to 9 chars + null terminator
    printf("%s\n", buffer);  // "This is t"



    return 0;
}