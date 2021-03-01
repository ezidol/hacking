#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char buf[16];
    gets(buf);

    printf("%s", buf);
}
