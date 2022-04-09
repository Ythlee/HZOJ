#include<stdio.h>
#include<math.h>

int main()
{
    int a, b;
    int sum = 0;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++) {
        int flag = 1;
        int ab = i / 100;
        if(i % 6 != 0) flag = 0;//判断是否是6的倍数
        for(int j = 2; j <= ab / 2; j++) { //判断千位和百位ab是否是质数
            if(ab % j == 0) {
                flag = 0;
                break;
            }
        }
        int cd = i % 100;
        int  sq = ceil(sqrt(cd)) * ceil(sqrt(cd));
        //printf("%d ",cd);
        if(sq != cd) flag = 0;//判断十位和个位cd是否是平方数
        if(flag) {
            sum && printf(" ");//最后一位不输出空格
            printf("%d", i);
            sum++;
        }
    }
    printf("\n%d", sum);
    return 0;
}
