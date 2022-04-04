#include <iostream>

int n, m, t, num[3005][3005];

int main(int argc, char *argv[])
{
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            scanf("%d", &num[i][j]);
        }
    }

    int x, y;
    x = n, y = 1;
    scanf("%d", &t);
    while(x > 0 && y <= m) {
        if(num[x][y] == t) {
            printf("%d %d\n", x, y);
			return 0;
        } else if(num[x][y] < t) {
            y++;
        } else {
            x--;
        }
    }

    return 0;
}
