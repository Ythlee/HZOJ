//#include <stdio.h>
//
//int n, num[105];
//
//void del(int x)
//{
//    for(int i = x; i < n - 1; i++) {
//        num[i] = num[i + 1];
//    }
//    num[n - 1] = 0;
//    n--;
//}
//
//
//int main(int argc, char *argv[])
//{
//    int temp;
//    scanf("%d", &n);
//    for(int i = 0; i < n; i++) {
//        scanf("%d", &num[i]);
//    }
//
//    for(int i = 0; i < n - 1; i++) {
//        for(int j = 0; j < n - i - 1; j++) {
//            if(num[j] > num[j + 1]) {
//                temp = num[j + 1];
//                num[j + 1] = num[j];
//                num[j] = temp;
//            }
//        }
//    }
//
//    for(int i = 0; i < n - 1; i++) {
//        if(num[i] == num[i + 1]) {
//            del(i);
//        }
//    }
//
//    printf("%d\n", n);
//    for(int i = 0; i < n; i++) {
//        i && printf(" ");
//        printf("%d", num[i]);
//    }
//
//    return 0;
//}
#include <stdio.h>

int main()
{
    int n, x, cnt = 0, arr[1001] = {0}, ans[101] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &x);
        if (!arr[x]) arr[x] = 1;
    }
    for (int i = 0; i < 1001; ++i) {
        if (arr[i]) {
            ans[cnt++] = i;
        }
    }
    printf("%d\n", cnt);
    for (int i = 0; i < cnt; ++i) {
        i && printf(" ");
        printf("%d", ans[i]);
    }
    return 0;
}
