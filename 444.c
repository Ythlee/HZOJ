#include <stdio.h>

int n, x, num[105];

int main(int argc, char *argv[])
{
    int temp;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    scanf("%d", &x);
    temp = num[n - 1];
    for(int i = n - 1; i >= x; i--) {
        num[i] = num[i - 1];
    }
    num[x - 1] = temp;

    for(int i = 0; i < n; i++) {
        i && printf(" ");
        printf("%d", num[i]);
    }

    return 0;
}
