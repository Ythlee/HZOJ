#include <stdio.h>

int main(int argc, char *argv[])
{
    double r, h;
    scanf("%lf%lf", &r, &h);
	printf("%.2lf\n",r * r * 3.14);
	printf("%.2lf\n",r * r * 3.14 * h);
    return 0;
}
