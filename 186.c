#include <stdio.h>

int fun(int *a, int i)
{
    int jump = 1;
    if (a[i] == 0) return 0;
    return jump + fun(a, i + a[i]);

}

int main()
{
    int n, a[100000] = {0};
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    printf("%d", fun(a, 1));
    return 0;
}
