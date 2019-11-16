#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b, n, remain;
	while(cin >> a >> b >> n)
	{
		cout << a/b << ".";
		remain = a%b;
		for (int i = 0; i < n; ++i)
		{
			remain *= 10;
			cout << remain / b;
			remain %= b;
		}
		cout << endl;
	}
	return 0;
}