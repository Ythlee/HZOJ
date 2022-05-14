/*************************************************************************
	> File Name: 220.c
	> Author: Ythlee
	> Mail: yc872027415@163.com
	> Created Time: 2022年05月14日 星期六 14时21分29秒
 ************************************************************************/
#include <stdio.h>
#include<string.h>

struct student {
    char arr[30];
    int chinese;
    int math;
    int english;
    int science;
    int sum;
};




struct student stu[105] = {0};
int main()
{
    int n;
    scanf("%d\n", &n);
    for(int i = 0; i < n; i++) {
        scanf("%s", stu[i].arr);
        scanf("%d", &stu[i].chinese);
        scanf("%d", &stu[i].math);
        scanf("%d", &stu[i].english);
        scanf("%d", &stu[i].science);
        getchar();
        stu[i].sum = stu[i].chinese + stu[i].math + stu[i].english + stu[i].science;
    }

    for(int i = 0; i < 4; i++) {
        int max = 0;
        for(int j = 1; j < n; j++) {
            if(stu[j].chinese > stu[max].chinese) {
                max = j;
            } else if(stu[j].chinese == stu[max].chinese) {
                if(strcmp(stu[j].arr, stu[max].arr) < 0) {
                    max = j;
                }
            }
        }
        stu[max].chinese = -1;
        i && printf(" ");
        printf("%s", stu[max].arr);
    }
    printf("\n");
    for(int i = 0; i < 4; i++) {
        int max = 0;
        for(int j = 1; j < n; j++) {
            if(stu[j].math > stu[max].math) {
                max = j;
            } else if(stu[j].math == stu[max].math) {
                if(strcmp(stu[j].arr, stu[max].arr) < 0) {
                    max = j;
                }
            }
        }
        stu[max].math = -1;
        i && printf(" ");
        printf("%s", stu[max].arr);
    }
    printf("\n");
    for(int i = 0; i < 4; i++) {
        int max = 0;
        for(int j = 1; j < n; j++) {
            if(stu[j].english > stu[max].english) {
                max = j;
            } else if(stu[j].english == stu[max].english) {
                if(strcmp(stu[j].arr, stu[max].arr) < 0) {
                    max = j;
                }
            }
        }
        stu[max].english = -1;
        i && printf(" ");
        printf("%s", stu[max].arr);
    }
    printf("\n");
    for(int i = 0; i < 4; i++) {
        int max = 0;
        for(int j = 1; j < n; j++) {
            if(stu[j].science > stu[max].science) {
                max = j;
            } else if(stu[j].science == stu[max].science) {
                if(strcmp(stu[j].arr, stu[max].arr) < 0) {
                    max = j;
                }
            }
        }
        stu[max].science = -1;
        i && printf(" ");
        printf("%s", stu[max].arr);
    }
    printf("\n");
    for(int i = 0; i < 4; i++) {
        int max = 0;
        for(int j = 1; j < n; j++) {
            if(stu[j].sum > stu[max].sum) {
                max = j;
            } else if(stu[j].sum == stu[max].sum) {
                if(strcmp(stu[j].arr, stu[max].arr) < 0) {
                    max = j;
                }
            }
        }
        stu[max].sum = -1;
        i && printf(" ");
        printf("%s", stu[max].arr);
    }
    printf("\n");

    return 0;
}
