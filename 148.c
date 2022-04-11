#include <stdio.h>
#include <string.h>

char str[55];
int main(int argc, char *argv[])
{
    scanf("%s", str);
    for(int i = strlen(str) - 1; i >= 0 ; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}
