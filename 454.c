#include <stdio.h>

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    int num[1005] = { 0 };
    for (int i = 1; i <= n; i++) {
        int t;
        scanf("%d", &t);
        if (num[t] == 0) cnt++;
        num[t]++;
    }
    printf("%d\n", cnt);
    for (int i = 1, flag = 0; i <= 1000; i++) {
        if (num[i]) {
            if (flag != 0) printf(" ");
            printf("%d", i);
            flag = 1;
        }
    }

    return 0;
}
