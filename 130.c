#include <stdio.h>

#define RATE	0.00417

int main(int argc, char *argv[])
{
    int m, n;
    double s = 0.0;

    scanf("%d%d", &m, &n);

    for(int i = 0; i < n; i++) {
        s = (m + s) * (1 + RATE);
    }
	printf("$%.2lf\n",s);
    return 0;
}
