#include <stdio.h>

int main(int argc, char *argv[])
{
    int t;
    int h, m, s;
    scanf("%d", &t);
    h = t / 3600;
    m = (t - (h * 3600)) / 60;
    s = t % 60;
    if(h < 12) {
        if(h < 10)
            printf("0%d:", h);
        else
            printf("%d:", h);
        if(m < 10)
            printf("0%d:", m);
        else
            printf("%d:", m);
        if(s < 10)
            printf("0%d am\n", s);
        else
            printf("%d am\n", s);
    } else if(h == 12) {
        printf("12:");
        if(m < 10)
            printf("0%d:", m);
        else
            printf("%d:", m);
        if(s < 10)
            printf("0%d midnoon\n", s);
        else
            printf("%d midnoon\n", s);
    } else {
        h -= 12;
        if(h < 10)
            printf("0%d:", h);
        else
            printf("%d:", h);
        if(m < 10)
            printf("0%d:", m);
        else
            printf("%d:", m);
        if(s < 10)
            printf("0%d pm\n", s);
        else
            printf("%d pm\n", s);
    }

    return 0;
}
