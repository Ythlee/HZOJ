#include <stdio.h>

int n, a, b;
int num[100005];

int main(int argc, char *argv[])
{
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
    }
    scanf("%d %d", &a, &b);

    int l = 0, r = n - 1, mid;
    while(l <= r) {
        mid = (l + r) / 2;
        if(num[mid] + a == b) {
            printf("Yes\n");
            return 0;
        } else if(num[mid] + a < b) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    printf("No\n");

    return 0;
}
