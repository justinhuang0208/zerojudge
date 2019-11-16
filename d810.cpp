#include<iostream>
#include<cmath>
using namespace std;
int t2_time[23]={0};
int t3_time[23]={0};
int t2(int k){
    t2_time[1]=1;
    t2_time[2]=2;
    if(t2_time[k]) return t2_time[k];
    return t2_time[k]=t2(k-1)+t2(k-2);
}
int t3(int k){
    t3_time[1]=1;
    t3_time[2]=2;
    t3_time[3]=4;
    if(t3_time[k]) return t3_time[k];
    return t3_time[k]=t3(k-1)+t3(k-2)+t3(k-3);
}
int main(){
    int t, k;
    while(cin >> t){
            cin >> k;
            k = abs(k);
        if(t==1) cout << 1 << endl;
        else if(t==2) cout << t2(k) << endl;
        else if(t==3) cout << t3(k) << endl;
    }
    return 0;
}