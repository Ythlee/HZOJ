#include <stdio.h>

int main(int argc, char *argv[])
{
    int a;
    int b = 0;
    int sum = 0;
    scanf("%d", &a);

    for(int i = a; i; i /= 10)
    {
        b = i % 10;
        sum = sum * 10 + b;
    }
    if(sum == a)
        printf("YES");
    else
        printf("NO");


    return 0;
}
