#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void) {
    char win[4];
    int size;
    char buf[24];

    scanf("%d", &size);
    read(0, buf, size);

    if(!strncmp(win, "ABCD", 4)) {
        printf("Hello world\n");
    }
}
