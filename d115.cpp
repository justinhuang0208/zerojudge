#include<iostream>
#include<algorithm>
using namespace std;

int input[100], ans[100], n, m;
void dfs(int index, int picked) {
    if(picked == m) {
        for(int i = 0; i < m; i++)
            cout << ans[i] << ' ';
        cout << endl;
        return;
    }
    if(index == n) 
        return;
    ans[picked] = input[index];
    dfs(index+1, picked+1);
    dfs(index+1, picked);
}
int main() {
    while (cin >> n && n) {
        for (int i = 0;i < n; i++) 
            cin >> input[i];
        cin >> m;
        sort(input,input+n);
        dfs(0,0);
        cout << endl;
    }
    return 0;
}