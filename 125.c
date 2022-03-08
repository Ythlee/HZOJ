#include <stdio.h>

int main(int argc, char *argv[])
{
    int h, m, s, t;
    scanf("%d%d%d%d", &h, &m, &s, &t);
    int sec = h * 3600 + m * 60 + s + t;
    if(sec > 86400) {
        sec -= 86400;
    }
    h = sec / 3600;
    m = (sec - (h * 3600)) / 60;
    s = sec % 60;

    if(h < 12)
        printf("%d:%d:%dam\n", h, m, s);
    else {
        h -= 12;
        if(h == 0)
            printf("%d:%d:%dpm\n", 12, m, s);
        else if(h == 12)
            printf("%d:%d:%dam\n", h, m, s);
        else
            printf("%d:%d:%dpm\n", h, m, s);
    }
    double p = (double) t / 86400;
    int ap = (p * 100000);
    int flag;
    if(ap % 10 >= 5)
        flag = 1;
    else flag = 0;
    ap /= 10;

    int x = ap / 100;
    int y = ap % 100 + flag;

    if(y == 0)
        printf("%d.0%d%%", x, y);
    else
        printf("%d.%d%%", x, y);

    return 0;
}
