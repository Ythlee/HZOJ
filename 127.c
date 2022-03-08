#include <stdio.h>

int main(int argc, char *argv[])
{
    int m;
    int  n;
    scanf("%d%d", &m, &n);
	double money = m;
    for(int i = 0; i < n; i++) {
        money = money* (1 + 0.06);
    }
    printf("%d\n", (int)money);
    return 0;
}
