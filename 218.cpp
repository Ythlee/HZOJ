#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main()
{
    int n;
    multimap<int, int> students;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        students.insert({t, i + 1});
    }
    for (auto i : students) {
        if (__builtin_expect(!!(i != (*students.begin())), 1)) printf(" ");
        printf("%d", i.second);
    }
    return 0;
}
