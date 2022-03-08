#include <stdio.h>

int main(int argc, char *argv[])
{
    double weight;
    scanf("%lf", &weight);
    if(weight <= 15.0)
    {
        printf("%.2lf", weight * 6.0);
    }
    else
    {
        printf("%.2lf", (weight - 15.0) * 9.0 + 15.0 * 6.0);
    }
    return 0;
}
