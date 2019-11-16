#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int  number,factor,times;

    while(cin >> number)
    {   
        if(number == 1)
            cout << 1 << endl;

        else    
        for(factor = 2; factor <= sqrt(number); factor++)
        {
            times = 0;
            while(number % factor == 0)
            {
                number /= factor;
                times++;
            }

            if(number == 1)
            {
                if(times > 1)
                    cout << factor << "^" << times << endl;
                else if(times == 1)
                    cout << factor << endl;
            }    
            else 
            {
                if(times > 1)
                    printf("%d^%d * ",factor,times);
                else if(times == 1)
                    printf("%d * ",factor);
            }    
        }    
    }
    return 0;
}