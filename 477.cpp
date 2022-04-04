#include <iostream>
using namespace std;

char str[105];

int main(int argc, char *argv[])
{
    cin >> str;
    int last = -1;
    int ans = 0;
    for(int i = 0 ; str[i]; i++) {
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            if(last == -1) {
                last = i;
            } else {
                ans = max(ans, i - last);
                last = i;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
