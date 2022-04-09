#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char str[105];
    int count = 0;
    scanf("%s", str);
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == 'A')
            count++;
    }
    printf("%d\n", count);
    return 0;
}
