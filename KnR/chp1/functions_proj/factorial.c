#include <stdio.h>

int factorial(int a);

int main() {

    printf("%d!:%d\n", 5, factorial(5));

    return 0;
}

int factorial(int num){
    int result=1;
    for (int i = 1; i <= num; ++i)
        result = result * i;
    return result;
}