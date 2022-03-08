#include <stdio.h>

int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(int argc, char *argv[])
{
    int x;
    int y, m, d;
    scanf("%d", &x);
    scanf("%d%d%d", &y, &m, &d);

    if((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
        days[1] = 29;
    }
    while(x--) {
        d++;
        if(d > days[m - 1]) {
            m++;
            d = 1;
        }
        if(m > 12) {
            y++;
            if((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
                days[1] = 29;
            }else days[1] = 28;
            m = 1;
        }
    }

    printf("%d %d %d", y, m, d);


    return 0;
}
