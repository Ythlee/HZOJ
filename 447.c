#include <stdio.h>

int main()
{
    int n, flag;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int j = i;
        do {
            if (j % 10 == 4 || j % 10 == 7)  flag = 1;
            else {
                flag = 0;
                break;
            }
            j /= 10;
        } while(j);
        if (flag == 1 && n % i == 0) {
            printf("YES\n");
            return 0;
        }
    }
    if (flag == 0)
        printf("NO");
    return 0;
}
