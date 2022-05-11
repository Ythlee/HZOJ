/*************************************************************************
	> File Name: a.c
	> Author: Ythlee
	> Mail: yc872027415@163.com
	> Created Time: 2022年05月11日 星期三 14时41分21秒
 ************************************************************************/
#include <stdio.h>
#include <string.h>

int n;
char str[15][2048];

void fun(char *p)
{
    strncpy(p, "No_smoking", 10);
    p += 10;
    while(*p != '\0') {
        *p = *(p + 1);
        p++;
    }
}

int main(int argc, char *argv[])
{
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    for(int i = 0; i < n; i++) {
        char *p = strstr(str[i], "Ban_smoking");
        while(p) {
            if(p)
                fun(p);
            p = strstr(str[i], "Ban_smoking");
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }
    return 0;
}
