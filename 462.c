#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct Person {
    char type;
    long long qqnum;
    char value[20];
} Person;

int main()
{
    int n;
    scanf("%d", &n);
    getchar();

    Person person;
    int maleCount = 0;
    int femaleCount = 0;
    int qqCount = 0;
    long long qqSum = 0;

    for (int i = 0; i < n; i++) {
        //scanf("%c %s", &person.type, person.value);
        scanf("%c", &person.type);
        getchar();
        if (person.type == 'i') {
            scanf("%s", person.value);
            getchar();
            int len = strlen(person.value);
            if ((person.value[len - 2] - '0') & 1) {
                maleCount++;
            } else {
                femaleCount++;
            }
        } else {
            qqCount++;
            scanf("%lld", &person.qqnum);
            getchar();
            qqSum += person.qqnum;
        }
    }

    printf("%d %d %lld\n", maleCount, femaleCount, (qqSum == 0 ? 0 : (qqSum / qqCount)));
    return 0;
}
