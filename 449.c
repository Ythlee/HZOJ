#include <stdio.h>
#include <stdlib.h>

int Yangh(int m, int n)
{
    if(n == 0 || n == m)//递归终止条件
        return 1;
    return Yangh(m - 1, n) + Yangh(m - 1, n - 1);
}

int main()
{
    int m, i, j;
    scanf("%d", &m);

    for(i = 0; i < m; i++) {
        //        for(j = 0; j < m - i; j++)
        //           printf(" ");
        for(j = 0; j <= i; j++) {
            if(j)
                printf(" %d", Yangh(i, j));
            else
                printf("%d", Yangh(i, j));
        }
        printf("\n");
    }
    return 0;
}
