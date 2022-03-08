#include <stdio.h>

int main(int argc, char *argv[])
{
    int y, m, d;
    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d%d%d", &y, &m, &d);

    if(m < 0 || m > 12) {
        printf("NO\n");
        return 0;
    }

    if(y % 4 != 0) {
        if(arr[m - 1] >= d) {
            printf("YES\n");
            return 0;
        }
        printf("NO\n");
    } else if(y % 100 == 0 && y % 400 != 0) {
        if(arr[m - 1] >= d) {
            printf("YES\n");
            return 0;
        }
        printf("NO\n");
    } else {
        if((arr[m - 1] + 1) >= d) {
            printf("YES\n");
            return 0;
        }
        printf("NO\n");
    }

    return 0;
}
