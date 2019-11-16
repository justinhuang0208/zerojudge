#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b, count;
	while(cin >> a >> b)
	{
		count = 0;
		for (int i = a; i <= b; ++i)
		{
			if(i % 2 == 0)
				count += 1;
		}
		cout << count << endl;
	}
	return 0;
}