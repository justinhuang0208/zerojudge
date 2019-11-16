#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, sum;
	while(cin >> n)
	{
		sum=0;
		for (int i = 2; i <= sqrt(n); ++i)
		{
			while(n%i==0){
				sum+=i;
				n/=i;
			}
		}
		if(n==1) cout << sum << endl;
		else cout << (sum+n) << endl;
	}
	return 0;
}