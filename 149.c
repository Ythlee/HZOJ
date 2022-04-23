#include <stdio.h>
#include <string.h>

char str[55];

int len, count;
int main(int argc, char *argv[])
{
    scanf("%[^\n]", str);
    len = strlen(str) - 1;
    while(str[len] != ' ') {
        count++;
        len--;
    }
    printf("%d\n", count);
    return 0;
}
