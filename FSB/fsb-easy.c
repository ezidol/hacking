#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(void) {
    int flag = 0x41414141;
    char buf[32] = {0, };

    read(0, buf, 31);
    printf(buf);
}
