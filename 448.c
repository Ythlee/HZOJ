#include <stdio.h>

int main(int argc, char *argv[])
{
    int n, bingo;
    scanf("%d", &n);
    int num[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    scanf("%d", &bingo);

    for(int i = 0; i <= n; i++) {
        if(bingo == num[i]) {
            printf("%d\n", i+1);
            return 0;
        }
    }
	printf("0\n");
    return 0;
}
