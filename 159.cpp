#include<iostream>

using namespace std;
int main()
{
    char a, b, c;
    cin >> a;
    c = a;
    int i = 0;
    for(i = 0; i < c - 64; i++) {
        for(int j = 0; j < i; j++) {
            cout << " ";
        }
        for(b = a; b >= 'A'; b--) {
            cout << b;
        }
        for(b = 'A'; b < a; b++) {
            cout << b;
        }
        cout << endl;
        a = a - 1;
    }
    return 0;
}
