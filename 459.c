#include<stdio.h>

struct student {
    char name[20];
    char sex[10];
    int old;
    float weigh;
} ;

int main()
{
    struct student a;
    scanf("%s%s%d%f", a.name, a.sex, &a.old, &a.weigh);
    printf("%s %s %d %.1f\n", a.name, a.sex, a.old, a.weigh);
}
