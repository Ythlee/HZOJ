#include <stdio.h>

int n, k;
int num[1000005];
int find[1000005];

int binar_serach(int *num, int a)
{
    int l = 1, r = n;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(num[mid] == a) {
            return mid;
        }
        if(num[mid] < a) {
            l = mid + 1;
        }
        if(num[mid] > a) {
            r = mid - 1;
        }
    }
    return 0;
}

int main(int argc, char *argv[])
{
    scanf("%d %d", &n, &k);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < k; i++) {
        scanf("%d", &find[i]);
    }

    for(int i = 0; i < k; i++) {
        int ind = binar_serach(num, find[i]);
        if(i != 0)printf(" ");
        printf("%d", ind);
    }

    return 0;
}
