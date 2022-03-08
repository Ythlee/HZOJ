#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define min(a,b) (((a)<(b))?(a):(b))

int n, m, s, arr[1005][1005];


int main(int argc, char *argv[])
{
    memset(arr, 0x3f, sizeof(arr));
    scanf("%d%d%d", &n, &m, &s);
    for(int i = 0; i < m; i++)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if(arr[a][b] > c)
        {
            arr[a][b] = c;
            arr[b][a] = c;
        }
    }
    //Floyd算法
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            for(int k = 1; k <= n; k++)
            {
                arr[j][k] = min(arr[j][k], arr[j][i] + arr[i][k]);
            }
        }
    }
    arr[s][s] = 0;
    for(int i = 1; i <= n; i++)
    {
        if(arr[s][i] == 0x3f3f3f3f)
        {
            printf("-1\n");
        }
        else
        {
            printf("%d\n", arr[s][i]);
        }
    }
    return 0;
}
