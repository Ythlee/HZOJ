#include <stdio.h>
#include <string.h>

int main()
{
    int x, t, ans = 0;
    char n[35] = {0};
    scanf("%d%s", &x, n);
    for (int i = 0; i < strlen(n); ++i) {
        t = n[i] - '0';
        ans = ans * x + t;
    }
    printf("%d", ans);
    return 0;
}
