#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m;
	cin >> n >> m;
	char x[m+1], y[n+1], in[m+1];
	for (int i = 0; i < n; ++i)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> in[j];
			if (in[j] == '#')
			{
				x[j] = '#';
				y[i] = '#';
			}
		}
			
	}
	for (int i = 0; i < m; ++i)
	{
		cout << x[i];
	}
	cout << endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << y[i];
		}
		cout << endl;
	}
	return 0;
}