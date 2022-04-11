#include<stdio.h>
int main()
{
    int m, n, k = 0;
    int c, d;
    scanf("%d %d", &m, &n);
    int a[10001];
    for(int i = 0; i <= m; i++) {
        a[i] = i;
    }
    while(n--) {
        scanf("%d %d", &c, &d);
        for(int i = c; i <= d; i++) {
            a[i] = -1;
        }
    }
    for(int i = 0; i <= m; i++) {
        if(a[i] != -1)
            k++;
    }
    printf("%d\n", k);
}
