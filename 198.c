/*************************************************************************
	> File Name: 198.c
	> Author: Ythlee
	> Mail: yc872027415@163.com
	> Created Time: 2022年05月14日 星期六 15时16分12秒
 ************************************************************************/
#include <stdio.h>

long long const M = 1000000007;

unsigned long long Fibonacci(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    long long fn_2 = 0, fn_1 = 1, fn;
    while (n-- > 1) {
        fn = (fn_1 + fn_2) % M;
        fn_2 = fn_1;
        fn_1 = fn;
    }
    return fn_1;
}


int main(int argc, char *argv[])
{
    long long n;
    scanf("%lld", &n);
    printf("%lld\n", Fibonacci(n));
    return 0;
}
