#include <stdio.h>

#define IN 1
#define OUT 0

int main() {

    int c, nl, nw, nc, state;

    nl = nw = nc = 0;

    state = OUT;
    while ((c = getchar()) != EOF){
        ++nc;
        if (c=='\n') {
            ++nl;
        }
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            puts("");
        }
        else if (state==OUT) {
            state = IN;
            printf("%c", c);
            ++nw;
        }

        else if (state == IN) {
            printf("%c", c);
}
    
    }

    // printf(" nc: %d | nl: %d | nw: %d\n", nc, nl, nw);

    return 0;
}