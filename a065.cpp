#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	string a;
	int x, y;
	while(cin >> a)
	{
		x = 0;
		y = 0;
		for (int i = 0; i < 6; ++i)
		{
			x = a[i];
			y = a[i+1];
			cout << abs(y - x);
		}
		cout << endl;
	}
	return 0;
}