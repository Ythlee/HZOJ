#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHN 0
#define MAT 1
#define ENG 2
#define SCI 3

typedef struct stu {
    char s[50];
    int score[4];
    int total;
} STU;

void sort_total(STU **stus, int len)
{
    for (int i = 0; i < len - 1; ++i) {
        int swapped = 0;
        for (int j = 0; j < len - i - 1; ++j) {
            if (stus[j]->total < stus[j + 1]->total) {
                STU *temp = stus[j];
                stus[j] = stus[j + 1];
                stus[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) break;
    }
}

void sort_name(STU **stus, int len)
{
    for (int i = 0; i < len - 1; ++i) {
        int swapped = 0;
        for (int j = 0; j < len - i - 1; ++j) {
            char *a = stus[j]->s;
            char *b = stus[j + 1]->s;
            if (strcmp(a, b) > 0) {
                STU *temp = stus[j];
                stus[j] = stus[j + 1];
                stus[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) break;
    }
}

void sort_course(STU **stus, int len, int c)
{
    for (int i = 0; i < len - 1; ++i) {
        int swapped = 0;
        for (int j = 0; j < len - i - 1; ++j) {
            if (stus[j]->score[c] < stus[j + 1]->score[c]) {
                STU *temp = stus[j];
                stus[j] = stus[j + 1];
                stus[j + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) break;
    }
}

void output4(STU **stus)
{
    for (int i = 0; i < 4; ++i) {
        if(i > 0) printf(" ");
        printf("%s", stus[i]->s);
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    STU **stus = (STU **)malloc(sizeof(STU *) * n);
    for (int i = 0; i < n; ++i) {
        STU *stu = (STU *)malloc(sizeof(STU));
        scanf("%s%d%d%d%d", stu->s,
              &stu->score[0],
              &stu->score[1],
              &stu->score[2],
              &stu->score[3]);
        stu->total = 0;
        for (int i = 0; i < 4; ++i) stu->total += stu->score[i];
        stus[i] = stu;
    }
    sort_name(stus, n);
    sort_course(stus, n, CHN);
    output4(stus);
    sort_name(stus, n);
    sort_course(stus, n, MAT);
    output4(stus);
    sort_name(stus, n);
    sort_course(stus, n, ENG);
    output4(stus);
    sort_name(stus, n);
    sort_course(stus, n, SCI);
    output4(stus);
    sort_name(stus, n);
    sort_total(stus, n);
    output4(stus);
    for (int i = 0; i < n; ++i) {
        free(stus[i]);
    }
    free(stus);
    return 0;
}
