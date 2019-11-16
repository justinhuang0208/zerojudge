#include<iostream>
#include<cmath>
using namespace std;

unsigned long long ans[150][150] = {0};

unsigned long long f(int  n, int m) {
	if (n == m) return 1;
	if (m == 0) return 1;
	if (m == 1) return n;
	if (ans[n][m]) return ans[n][m];
	else return ans[n][m] = f(n - 1, m - 1) + f(n - 1, m);
}

int main(int argc, char const *argv[]) {
	int n, m;
	while (cin >> n >> m && n!=0 && m!=0) {
		cout << n << " things taken " << m << " at a time is " << f(n,m) << " exactly."<< endl;
	}
	return 0;
}