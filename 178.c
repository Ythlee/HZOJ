#include <stdio.h>
#include <string.h>

int n;
char str[25][500000] = {{"A"}, {"ABA"}, {"ABACABA"}};
char temp[200000000];

int main(int argc, char *argv[])
{
    scanf("%d", &n);

    for(int i = 3; i < n; i++) {
        sprintf(temp, "%s%c%s", str[i - 1], 'A' + i, str[i - 1]);
        strcat(str[i], temp);
    }

    printf("%s\n", str[n - 1]);
    return 0;
}
