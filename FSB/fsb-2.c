#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void) {
    char buf[100] = {0,};
    FILE *fp = fopen("log.txt", "w");

    read(0, buf, 100-1);
    fprintf(fp, "%s", buf);

    fclose(fp);
    
    return 0;
}
