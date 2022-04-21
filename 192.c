#include <stdio.h>
#include <math.h>

double binary_search(double n)
{
    double head = 0, tail = n + 1.0, mid;
#define EPSL 1e-7
    while(tail - head > EPSL) {
        mid = (head + tail) / 2.0;
        if(mid * exp(mid) < n) head = mid;
        else tail = mid;
    }
#undef EPSL
    //返回head或者tail都可
    return head;
}
int main()
{
    double n;
    while(~scanf("%lf", &n)) {
        printf("%.4lf\n", binary_search(n));
    }
    return 0;
}
