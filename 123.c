#include <stdio.h>

int main(int argc, char *argv[])
{
    long a, b, c, d;
    scanf("%ld%ld", &a, &b);
    scanf("%ld%ld", &c, &d);

    if(((a - c <= 0) && (b - d >= 0)) || ((a - c >= 0) && (b - d <= 0))) {
		printf("YES\n");
	}else{
		printf("NO\n");
	}
    return 0;
}
