#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int input, sum;
    while(cin >> n)
    {
        sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> input;
            sum += input;
        }
        if (sum > 59 * n)
            cout << "no";
        else
            cout << "yes";
        cout << endl;
    }
    return 0;
}