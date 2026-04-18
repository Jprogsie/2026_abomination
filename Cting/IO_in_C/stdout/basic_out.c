#include <stdio.h>

int main() {
/*

Output functions provided by stdio.h

1. puts
2. printf()
3. putchar()
4. fprintf()
5. sprintf()

*/

printf("Hello bruv\n");
puts("Straight to stdout, adds newline automatically");

putchar('A');


/*

Format specifiers

%d int
%f float
%lf double
%c char
%s string
%p pointer address
%x hex

*/

    printf("%10d\n", 42);      // right-aligned, width 10
    printf("%-10d|\n", 42);    // left-aligned
    printf("%.2f\n", 3.14159); // 2 decimal places
    printf("%05d\n", 42);      // zero-padded → 00042
    printf("%5d\n", 42);
    
    return 0; 
}