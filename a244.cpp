#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b, n;
	long long int ans, c;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b >> c;
		switch (a)
		{
			case 1:
				ans = b + c;
				break;
			case 2:
				ans = b - c;
				break;
			case 3:
				ans = b * c;
				break;
			case 4:
				ans = b / c;
				break;
		}
		cout << ans << endl;
	}
	return 0;
}