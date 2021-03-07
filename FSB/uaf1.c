#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main(void) {
    char *a = (char *)malloc(100);
    memset(a, 0, 100);
    strcpy(a, "Hello world!");
    printf("%s\n", a);
    free(a);
    char *b = (char *)malloc(100);
    memset(b, 0, 100);
    strcpy(b, "Bye Bye");
    printf("%s\n", b);
    strcpy(a, "Hello world!");
    printf("%s\n", b);
    free(b);

    return 0;
}
