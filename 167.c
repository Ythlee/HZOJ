#include <stdio.h>
#include <string.h>

int main()
{
    char a[10000] = {0}, b[10000] = {0}, newstr[20006] = {0};
    int n, index;
    scanf("%[^\n]", a);
    scanf("%d", &n);
    getchar();
    scanf("%[^\n]", b);
    size_t lenb = strlen(b);
    for (int i = 0; i < strlen(a); ++i) {
        if (a[i] == 'a') {
            index = i + 1;
            break;
        }
    }
    for (int i = 0; i < n - 1; ++i) {
        newstr[i] = a[i];
    }
    for (size_t i = 0; i < lenb; ++i) {
        newstr[n - 1 + i] = b[i];
    }
    char *p = &a[0] + n - 1, *q = &newstr[0] + n + lenb - 1;
    while (*p != '\0') {
        *q = *p;
        q++, p++;
    }
    printf("%ld\n", strlen(a));
    printf("%d\n", index);
    printf("%s", newstr);
    return 0;
}
