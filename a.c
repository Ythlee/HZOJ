#include <stdio.h>
#include <stdlib.h>

#define MAX_N	100000
int score[MAX_N + 5];

int main(int argc, char *argv[])
{
    int n;
    int temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &score[i]);

    for(int i = 0; i < n; ++i) {
        for(int j = i + 1; j < n; ++j) {
            if(score[j] < score[i]) {   //如果后一个元素小于前一个元素则交换
                temp = score[i];
                score[i] = score[j];
                score[j] = temp;
            }
        }
    }

    int mid = (n + 1) / 2;
	for(int i = n /2;score[i] == score[i-1]; i--)
		mid++;
    printf("%d %d", score[mid], mid);

    return 0;
}
