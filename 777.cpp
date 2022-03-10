#include <iostream>
#include <vector>

using namespace std;


vector<vector<int>> ans;
vector<int> temp;

void dfs(int idx, int k, int n)
{
    if(n < 0) return ;
    if(n == 0 && temp.size() == k) {
        ans.push_back(temp);
        return ;
    }

    for(int i = idx; i <= 9; i++) {
        temp.push_back(i);
        dfs(i + 1, k, n - i);
        temp.pop_back();//回溯
    }
}

int main(int argc, char *argv[])
{
    int n, k;
    cin >> n >> k;
    dfs(1, n, k);
    cout << ans.size() << endl;
    return 0;
}
