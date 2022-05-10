#include<stdio.h>
int main()
{
    int m, n, temp, r, p;
    scanf("%d%d", &m, &n);
    if(m < n) {
        temp = m;
        m = n;
        n = temp;
    }
    r = m % n;
    p = m * n; //p存放两者乘积，p除以最大公约数即为最小公倍数
    while(r != 0) { //求两者公约数
        m = n;
        n = r;
        r = m % n;
    }
    printf("%d\n", n);
    //printf("最小公倍数为：%d\n", p / n);

}
