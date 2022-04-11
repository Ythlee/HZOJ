#include <stdio.h>
#include <string.h>

char str[10000];

int main(int argc, char *argv[])
{
    scanf("%s", str);

    for(int i = 0; i < strlen(str); i++) {
        if(('a' <= str[i]) && (str[i] <= 'z')) {
            str[i] -= 32;
        }
        else if(('A' <= str[i]) && (str[i] <= 'Z')) {
            str[i] += 32;
        }
    }
    printf("%s\n", str);
    return 0;
}
