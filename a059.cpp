#include<iostream>
#include<cmath>

using namespace std;

int issqrt(int a){
	int m = sqrt(a);
	if(m*m==a) return 1;
	else return 0;
}

int main(int argc, char const *argv[])
{
	int a, b, t, result=0;
	while(cin >> t)
	{
		for (int i = 0; i < t; ++i)
			{
				result=0;
				cin >> a >>b;
				for (int j = a; j <= b; ++j)
				{
					if (issqrt(j))
					{
						result+=j;
					}
				}
				cout << "Case " << i+1 << ": " << result << endl;
			}	
	}
	return 0;
}