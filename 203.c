#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *a, int len)
{
    for (int i = 0; i < len; ++i) {
        for (int j = i - 1; j >= 0; --j) {
            if (a[j] < a[j + 1]) {
                swap(&a[j], &a[j + 1]);
            } else {
                break;
            }
        }
    }
}

int main()
{
    int arr[11][10] = {0}, cnt = 0;
    int all[100] = {0};
    int m, n;
    double avg = 0;
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &arr[i][j]);
            all[(i - 1) * n + j] = arr[i][j];
            avg += (float)arr[i][j];
            if (arr[i][j] > arr[0][j]) arr[0][j] = arr[i][j];
        }
    }
    avg = avg / (double)(m * n);
    avg = (int)(avg + 0.5);
    sort(all, m * n);
    for (int i = 1; i <= m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == m) printf("%d\n", arr[0][j]);
            if (arr[i][j] >= avg) cnt++;
        }
    }
    for (int i = 0; i < m * n; ++i) {
        i && printf(" ");
        printf("%d", all[i]);
    }
    printf("\n%g\n%d", avg, cnt);
    return 0;
}
