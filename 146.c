#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char str[55];
    scanf("%s", str);

    for(int i = 0; i < strlen(str); i++) {
        if(('a' <= str[i] && str[i] <= 'z') || 'A' <= str[i] && str[i] <= 'Z') {
            if(str[i] == 'z') {
                str[i] = 'a';
            } else if(str[i] == 'Z' ) {
                str[i] = 'A';
            } else {
                str[i] += 1;
            }
        }
    }

    printf("%s\n", str);
    return 0;
}
