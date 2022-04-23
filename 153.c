#include <stdio.h>

int main()
{
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    int h, j, k;
    if (y != 0 && m < 3) {
        y--;
        m += 12;
    }
    if (y == 0) {
        h = (d + 26 * (m + 1)) % 7;
    } else {
        j = y / 100;
        k = y % 100;
        h = (d + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
    }
    switch (h) {
        case 0:
            h = 6;
            break;
        case 1:
            h = 7;
            break;
        case 2:
            h = 1;
            break;
        case 3:
            h = 2;
            break;
        case 4:
            h = 3;
            break;
        case 5:
            h = 4;
            break;
        case 6:
            h = 5;
            break;
        default:
            h = 0;
    }
    printf("%d", h);
    return 0;
}
