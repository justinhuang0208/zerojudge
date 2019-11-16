#include<iostream>
#include<cmath>
using namespace std;
long long mod(long long b, long long p, long long m){
	if(p==0) return 1;
	else if(p==1) return b%m;
	else{
		if(p%2) return mod(b, p/2, m)*mod(b, p/2, m)*b%m;
		else return mod(b, p/2, m)*mod(b, p/2, m)%m;
	}
}
int main(int argc, char const *argv[]){
	long long b, p, m;
	while(cin >> b >> p >> m){
		cout << mod(b, p, m) << endl;
	}
	return 0;
}