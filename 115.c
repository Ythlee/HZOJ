#include <stdio.h>

int main(int argc, char *argv[])
{
    int num, bingo;
    scanf("%d%d", &bingo, &num);

    if(bingo == num)
    {
        printf("%d", 100);
    }
    else if(((bingo % 10) == (num / 10))  && ((bingo / 10) == (num % 10)))
    {
        printf("%d", 20);
    }
    else if(((bingo % 10) == (num / 10))  || ((bingo / 10) == (num % 10)) || ((bingo % 10) == (num % 10)) || ((bingo / 10) == (num / 10)))
    {
        printf("%d", 2);
    }
    else
    {
        printf("0");
    }

    return 0;
}
