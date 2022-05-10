#include<stdio.h>
struct stu	{
    char name[20];
    char sex[10];
    int year;
    int month;
};

int main()
{

    struct stu s[999], t;
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%s %s %d %d", s[i].name, s[i].sex, &s[i].year, &s[i].month);
    }
    for(int j = 1; j < n; j++) {
        for(int k = n - 1; k >= j; k--) {
            if(s[k].year > s[k - 1].year) {
                t = s[k];
                s[k] = s[k - 1];
                s[k - 1] = t;
            }
            if(s[k].year == s[k - 1].year) {
                if(s[k].month > s[k - 1].month) {
                    t = s[k];
                    s[k] = s[k - 1];
                    s[k - 1] = t;
                }
            }
        }
    }
    for(int i = 0; i < n; i++) {
        printf("%s %s %d %d\n", s[i].name, s[i].sex, s[i].year, s[i].month);
    }
    return 0;
}
