#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int number, acount, bcount, ccount;
	acount=0;
	bcount=0;
	ccount=0;
	int num[50000];
	cin >> number;
	for (int i = 0; i < number; ++i)
	{
		cin >> num[i];
		if (num[i]%3==0)
		{
			acount++;
		}
		else if (num[i]%3==1)
		{
			bcount++;
		}
		else
		{
			ccount++;
		}
	}
	cout << acount << " " << bcount << " " << ccount;
	return 0;
}