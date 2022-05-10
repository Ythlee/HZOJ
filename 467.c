#include <stdio.h>

long long Fact(long long n) //递归函数
{
    long long res = n;
    if(n > 1)
        res = res * Fact(n - 1);
    return res;
}

int main() //主函数
{
    long long n, cnt;
    scanf("%lld", &n);
    cnt = Fact(n);
    printf("%lld\n", cnt);
    return 0;
}
