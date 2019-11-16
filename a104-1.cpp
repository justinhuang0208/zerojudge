#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, t;
	int num[1000] = {0};
	while(cin >> n)
	{
		for (int i = 0; i < n; ++i)
		{
			cin >> num[i];
		}
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < n - 1; j++)
			{
				if(num[j] > num[j+1])
				{
					t = num[j];
					num[j] = num[j+1];
					num[j+1] = t;
				}
			} 
		}
		for (int k = 0; k < n; ++k)
		{
			cout << num[k] << " ";
		}
		cout << endl;
	}
	return 0;
}