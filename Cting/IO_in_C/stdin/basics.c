#include <stdio.h>
#include <string.h>

int main() 
{
    printsf("----Begin here----");

    /*
    
    getchar() is the most basic and simple function which terminates on 
    encountering EOF which is -1 usually and Ctrl+d in linux and Ctrl+x in windows I guess 
    
    its simplest function that doesn't use syscalls directly 

    the other functions are made on top of this

    */

    // #fgets() 
    char buf[100];
    fgets(buf, sizeof(buf), stdin);
    printf("You said: %s", buf);

    // to strip out the last '\n' from the buffer and replace it with \0
    buf[strcspn(buf, "\n")] = '\0';

    // #sscanf()
    // sscanf — parse from a string instead of stdin
    char data[] = "25 Ali";
    int age;
    char name[50];
    sscanf(data, "%d %s", &age, &name);

    // fscanf — read from a file instead of stdin
    FILE *f = fopen("data.txt", "r");
    fscanf(f, "%d", &age);

    // sscanf isn't really about stdin at all — it parses from a string 
    // you already have in memory. Like you've got a line from fgets and now 
    // you wanna pull structured data out of it:

    // #return values of scanf()
    int result = scanf("%d", &age);
    if (result != 1) {
    // input failed, user typed letters instead of a number
    }

    /*
    
    #The deep bit of scanf()

    The deep bit — what actually happens when you call scanf
    This is where it gets interesting for your exploitation path.

    [Your code → scanf → C standard library → read() syscall → kernel → keyboard buffer]

    scanf is NOT talking to your keyboard directly. It's reading from a FILE stream called
    stdin which is buffered. The kernel collects your keystrokes, you hit enter, 
    THEN it flushes to the program. That's why your program waits — it's blocked 
    on the read() syscall.

    You can actually see this syscall happening: "strace ./program"
    
    
    
    */

    return 0;
}