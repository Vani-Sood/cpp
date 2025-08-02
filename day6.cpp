// Code for decimal to binary
/*
#include<iostream>
using namespace std;
int decToBinary(int decNum){
	int ans=0, pow=1;
	while(decNum>0){
		int rem= decNum%2;
		decNum/=2;
		ans+=(rem*pow);
		pow*=10;
	}
	return ans;
}
int main(){
	int decNum;
	cin>>decNum;
	cout<<decToBinary(decNum)<<endl;
	return 0;
}*/

/*//Code for decimal to binary for rande till n
#include<iostream>
using namespace std;
int decToBinary(int decNum){
	int ans=0, pow=1;
	while(decNum>0){
		int rem= decNum%2;
		decNum/=2;
		ans+=(rem*pow);
		pow*=10;
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<decToBinary(i)<<endl;
	}
	return 0;
}*/


//Code for Binary to decimal
#include<iostream>
using namespace std;
int binToDec(int binNum){
	int ans=0; int pow=1;
	while(binNum>0){
		int rem=binNum%10;
		ans+=rem*pow;
		binNum/=10;
		pow*=2;
	}
	return ans;
}
int main(){
	int binNum;
	cin>>binNum;
	cout<< binToDec(binNum)<<endl;
}

