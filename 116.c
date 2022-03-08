#include <stdio.h>


int main(int argc, char *argv[])
{
    int a, b, c;
    int x, y, z;
    int sum;
    scanf("%d%d%d", &a, &b, &c);

    sum = a + b + c;
    x = a > b ? (a > c ? a : c) : (b > c ? b : c);
    y = a < b ? (a < c ? a : c) : (b < c ? b : c);
    z = sum - x - y;

    if(y + z > x)
    {
        if(y * y + z * z > x * x)
            printf("acute triangle");
        else if(y * y + z * z == x * x)
            printf("right triangle");
        else if(y * y + z * z < x * x)
            printf("obtuse triangle");
    }
	else
		printf("illegal triangle");


    return 0;
}
