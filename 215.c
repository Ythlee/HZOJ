#include <stdio.h>
#include <stdlib.h>

typedef struct stu {
    char s[10];
    int score[4];
    int total;
} STU;

void sort(STU **stus, int len)
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
    sort(stus, n);
    for (int i = 0; i < 3; ++i) {
        printf("%s\n", stus[i]->s);
    }
    for (int i = 0; i < n; ++i) {
        free(stus[i]);
    }
    free(stus);
    return 0;
}
