/*************************************************************************
	> File Name: 79.c
	> Author: Ythlee
	> Mail: yc872027415@163.com
	> Created Time: 2022年05月12日 星期四 21时48分11秒
 ************************************************************************/

#include <stdio.h>

int a, b, num[10000005] = { 1, 1 };

int main(int argc, char *argv[])
{
    scanf("%d %d", &a, &b);
    for (int i = 2; i * i <= b; i++) {
        if (num[i] == 0) {
            for (int j = 2; i * j <= b; j++) {
                num[i * j] = 1;
            }
        }
    }
    for (int i = a; i <= b; i++) {
        if(!num[i])
            printf("%d\n", i);
    }
    return 0;
}
