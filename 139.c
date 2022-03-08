#include <stdio.h>
int main(int argc, char* argv[])
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i * 2 ; j++) {
            printf("A");
        }
        printf("\n");
    }
    for (int i = n - 1; i > 0; i--) {

        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i * 2; j++) {
            printf("A");
        }
        printf("\n");
    }
}
