#include <stdio.h>
#include <string.h>

char str[40];
int len;

void movestr(char * str, int len)
{
    char a = str[len - 1];
    char b = str[len];
    for(int i = len - 2; i >= 0; i--) {
        str[i + 2] = str[i];
    }
    str[0] = a;
    str[1] = b;
}

int main(int argc, char *argv[])
{
    scanf("%s", str);
    len = strlen(str) - 1;

    for(int i = 0; i <= len; i++) {
        printf("%s\n", str);
        movestr(str, len);
    }


    return 0;
}
