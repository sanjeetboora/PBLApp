#include <bits/stdc++.h>
using namespace std;
bool checkPrime(int n){
	for (int i = 2; i*i <= n; ++i)
	{
		if(n%i==0){
			return false;
		}
	}
	return true;
}
void PrimeSum(int num){
	for(int i=2;i<=num/2;i++){
		if(checkPrime(i) && checkPrime(num-i)){
			cout<<num<<" "<<i<<" "<<(num-i)<<endl;
			return;
		}
	}
}
int main(int argc, char const *argv[])
{
	int num;
	cin>>num;
	PrimeSum(num);
	return 0;
}