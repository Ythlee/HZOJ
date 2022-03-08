#include <stdio.h>

int main(int argc, char *argv[])
{
    int y, m;
    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d%d", &y, &m);
    if(y % 4 != 0) {
        printf("%d\n", arr[m - 1]);
    } else if(y % 100 == 0 && y % 400 != 0) {
        printf("%d\n", arr[m - 1]);
    } else {
        if(m == 2) {
            printf("%d\n", arr[m - 1] + 1);
        } else {
            printf("%d\n", arr[m - 1]);
        }
    }
    return 0;
}
