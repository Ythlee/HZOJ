#include <stdio.h>
int main()
{
    int y, m, d, y1, m1, d1, y2, m2, d2, a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d %d %d", &y, &m, &d);
    if(y % 4 == 0 && y % 100 || y % 400 == 0)
        a[2] = 29;
    y1 = y2 = y;
    m1 = m2 = m;
    d1 = d - 1;
    d2 = d + 1;
    if(d == 1) {
        if(m == 1) {
            y1 -= 1;
            m1 = 12;
            d1 = 31;
        } else {
            m1 -= 1;
            d1 = a[m1];
        }
    }
    if(d == a[m]) {
        if(m == 12) {
            y2 += 1;
            m2 = d2 = 1;
        } else {
            m2 += 1;
            d2 = 1;
        }
    }
    printf("%d %d %d\n%d %d %d", y1, m1, d1, y2, m2, d2);
    return 0;
}
