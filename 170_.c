#include <stdio.h>
#include <stdlib.h>

int cmp(char *p)
{
    char str[12] = "Ban_smoking";
    for (int i = 0; i < 11; i++) {
        if (*(p + i) != str[i]) return 0;
    }
    return 1;
}

int main()
{
    int n;
    char s[100][2048] = {0}, buf[2048] = {0};
    char ns[11] = "No_smoking";
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%s", buf);
        char *p = buf;
        int is = 0, ib = 0;
        while (*(p + ib) != '\0') {
            if (*(p + ib) == 'B' && cmp((p + ib))) {
                int dif = 0;
                for (; dif < 10; ++dif) {
                    s[i][is + dif] = ns[dif];
                }
                is += dif, ib = ib + dif + 1;
            } else {
                s[i][is] = *(p + ib);
                is++, ib++;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        printf("%s\n", s[i]);
    }

    return 0;
}
