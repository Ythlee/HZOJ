#include <stdio.h>

typedef struct node {
    int num, ind;
} node;


int n;
int temp, inx;
node stu[100005];

int main(int argc, char *argv[])
{
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &stu[i].num);
        stu[i].ind = i;
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) {
            if(stu[j].num > stu[j + 1].num) {
                temp = stu[j + 1].num;
                inx = stu[j + 1].ind;
                stu[j + 1].num = stu[j].num;
                stu[j + 1].ind = stu[j].ind;
                stu[j].num = temp;
                stu[j].ind = inx;
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        (i != 1) && printf(" ");
        printf("%d", stu[i].ind);
    }
    return 0;
}
