#include <stdio.h>

int n, m, a;
int num1[100005];

int binary_search(int x)
{
    int l = 0, r = n - 1, mid;
    while(l <= r) {
        mid = (l + r) / 2;
        if(num1[mid] == x)return num1[mid];
        else if(num1[mid] < x) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return num1[r];
}

int main(int argc, char *argv[])
{
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) {
        scanf("%d", &num1[i]);
    }

    for(int i = 0; i < m; i++) {
        scanf("%d", &a);
        i && printf(" ");
        if(a < num1[0]) printf("%d", num1[0]);
        else if(a > num1[n - 1])printf("%d", num1[n - 1]);
        else {
            printf("%d", binary_search(a));
        }
    }
    printf("\n");
}
