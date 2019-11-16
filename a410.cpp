#include<iostream>
#include<stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
	double a1, b1, c1, a2, b2, c2, x, y;
	while(cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2)
	{
		x = (c1 * b2 - c2 * b1) / (a1 * b2 - a2 * b1);
		y = (c1 * a2 - c2 * a1) / (b1 * a2 - a1 * b2);
		if (a1 * b2 == a2 * b1 && b1 * c2 == b2 * c1)
		{
			cout << "Too many" << endl;
		}
		else if (a1 * b2 == a2 * b1 && b1 * c2 != b2 * c1)
		{
			cout << "No answer" << endl;
		}
		else
		{
			printf("x=%.2f\n", x);
			printf("y=%.2f\n", y);
		}
		
	}
	return 0;
}