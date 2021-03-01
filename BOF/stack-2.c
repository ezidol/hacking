#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_valid(char *password) {
    int auth = 0;
    char buf[16];

    strncpy(buf, password, strlen(password));
    
    if (!strcmp(buf, "SECRET_PASSWORD")) {
        auth = 1;
    }
    return auth;
    
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage ./test_bof1 PASSWORD\n");
        return -1;
    }
    
    if (check_valid(argv[1])) {
        printf("Login\n");
    } else {
        printf("Access Denied\n");
    }
    return 0;
}
