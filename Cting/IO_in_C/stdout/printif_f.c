#include <stdio.h>

int main() {

    // fprintf(stream, "format", args...)
    // stream = stdout, stderr, or a file with fopen

    fprintf(stdout,"Hello, this is a stdout stream text %c", '\n');

    int age = 17;
    if (age <18) {
        fprintf(stderr, "Not yet, blud\n");
        return 1;
    }

    // Files and file streams
    FILE *f = fopen("log.txt", "w");
    if (f == NULL) {
        fprintf(stderr, "Couldn't open file, tío\n");
        return 1;
    }

    fprintf(f, "User logged in\n");
    fprintf(f, "Score: %d\n", 9001);

    fclose(f);


    return 0;
}

/*     

=========NOTES==========

*/

/*

File Descriptors:
- 0: stdin (standard input)
- 1: stdout (standard output)
- 2: stderr (standard error)

Redirecting Output to File:
FILE *fp = fopen("output.txt", "w");
fprintf(fp, "Writing to file\n");
fclose(fp);

Command line redirection:
./program > output.txt      (redirects stdout)
./program 2> error.txt      (redirects stderr)
./program &> all.txt        (redirects both stdout and stderr)

*/