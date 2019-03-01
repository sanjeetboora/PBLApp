#include <bits/stdc++.h>
using namespace std;
bool happyNumber(int num){
	int sum= INT_MAX;
	while(sum>9){
		int s = 0;
		while(num!=0){
			int rem = num%10;
			s+=(rem*rem);
			num/=10;
		}
		num=s;
		sum=s;
	}
	if(sum==1){
		return true;
	}
	else{
		return false;
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	if(happyNumber(n)){
		cout<<"Happy number"<<endl;
	}else{
		cout<<"Unhappy number"<<endl;
	}
	return 0;
}