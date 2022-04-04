#include<iostream>
#include <cmath>
using namespace std;


int s11[10005][2], s21[5005][2], n11, n21;

void p()
{
    for (int i = 0; i <= n11; i++) {
        cout << s11[i][0] << ":" << s11[i][1] << endl;
    }
    cout << endl;
    for (int i = 0; i <= n21; i++) {
        cout << s21[i][0] << ":" << s21[i][1] << endl;
    }
}

int main()
{
    char s[30];
    while (cin >> s) {
        for (int i = 0; s[i]; i++) {
            if (s[i] == 'E') {
                p();
                return 0;
            }
            if (s[i] == 'W') {
                s11[n11][0]++;
                s21[n21][0]++;
            } else {
                s11[n11][1]++;
                s21[n21][1]++;
            }
            if ((s11[n11][0] >= 11 || s11[n11][1] >= 11) && abs(s11[n11][0] - s11[n11][1]) >= 2) {
                n11++;
            }
            if ((s21[n21][0] >= 21 || s21[n21][1] >= 21) && abs(s21[n21][0] - s21[n21][1]) >= 2) {
                n21++;
            }
        }
    }

    return 0;
}

