#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int y, x;
    scanf("%d", &y);

    if(y >= 1900) {
        x =  y - 1900;
        if(x % 12 == 0) {
            printf("rat\n");
        } else if(x % 12 == 1) {
            printf("ox\n");
        } else if(x % 12 == 2) {
            printf("tiger\n");
        } else if(x % 12 == 3) {
            printf("rabbit\n");
        } else if(x % 12 == 4) {
            printf("dragon\n");
        } else if(x % 12 == 5) {
            printf("snake\n");
        } else if(x % 12 == 6) {
            printf("horse\n");
        } else if(x % 12 == 7) {
            printf("sheep\n");
        } else if(x % 12 == 8) {
            printf("monkey\n");
        } else if(x % 12 == 9) {
            printf("rooster\n");
        } else if(x % 12 == 10) {
            printf("dog\n");
        } else if(x % 12 == 11) {
            printf("pig\n");
        }
    } else if(y < 1900) {
        x = 1900 - y;
        if(x % 12 == 0) {
            printf("rat\n");
        } else if(x % 12 == 1) {
            printf("pig\n");
        } else if(x % 12 == 2) {
            printf("dog\n");
        } else if(x % 12 == 3) {
            printf("rooster\n");
        } else if(x % 12 == 4) {
            printf("monkey\n");
        } else if(x % 12 == 5) {
            printf("sheep\n");
        } else if(x % 12 == 6) {
            printf("horse\n");
        } else if(x % 12 == 7) {
            printf("snake\n");
        } else if(x % 12 == 8) {
            printf("dragon\n");
        } else if(x % 12 == 9) {
            printf("rabbit\n");
        } else if(x % 12 == 10) {
            printf("tiger\n");
        } else if(x % 12 == 11) {
            printf("ox\n");
        }

    }

    return 0;
}
