#include<iostream>

using namespace std;

int main ()
{
    int t, sum, n;
    while(cin >> t)
    {
        for (int i = 0; i < t ; i++)
        {
            sum = 1;
            cin >> n;
            if(n == 0)
            {
                cout << 0 << endl;
                continue;
            }

            while(n != 0)
             {
                int temp;
                temp = n % 10;
                sum = temp * sum;
                n /= 10;
             }
             cout << sum << endl;
        }

    }
    return 0;
}
