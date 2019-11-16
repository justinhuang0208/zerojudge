#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, sum, count;
	while (cin >> n >> m)
	{
		sum = 0;
		count = 0;
		while(sum <= m)
		{
			sum += n;
			n++;
			count++;
		}
		if (count == 0)
		{
			count += 1;
		}
		cout << count << endl;

	}
	return 0;
}