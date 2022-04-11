#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    int max = 0;
    scanf("%d", &n);
    int num[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        if(max < num[i]) {
            max = num[i];
        }
    }
	printf("%d\n",max);
    return 0;
}
