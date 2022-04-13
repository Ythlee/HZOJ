#include <stdio.h>
#include <string.h>

int cmp(char *a, char *b)
{
    for (int i = 0; i < strlen(b); ++i) {
        if (*(a + i) != *(b + i)) return 0;
    }
    return 1;
}

int main()
{
    char s[1000] = {0}, ss[1000] = {0}, *ps = s, *pss = ss;
    int ans;
    scanf("%[^\n]", s);
    getchar();
    scanf("%[^\n]", ss);
    //printf("%s\n%s\n", s, ss);
    while (*ps != '\0') {
        ans += cmp(ps++, pss);
    }
    printf("%d", ans);
    return 0;
}
