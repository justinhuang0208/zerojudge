#include<iostream>
#include<algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	int i;
	int num[1000]={0};
	while(cin >> n)
	{
		for (i = 0; i < n; ++i)
			{
				cin >> num[i];
			}
		sort(num, num+n);
		for (i = 0; i < n; ++i)
			{
				cout << num[i];
			}
	}
	cout << endl;
	return 0;
}