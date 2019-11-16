#include<iostream>
using namespace std;

int main()
{
    int n, m, l, r, i, result;
    
    while(cin >> n >> m)
    {
    	int f[100000] = {0};
    	result = 0;
        for(i = 1; i <= n; i++)
        {
            cin >> f[i];
            f[i] = f[i-1] + f[i];
        }
        for(i = 0; i < m; i++)
        {
            cin >> l >> r;
            cout << f[r] - f[l-1] << endl;
        }

    }
    return 0;

}