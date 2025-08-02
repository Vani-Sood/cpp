//FUNCTION
//sum of 2 numbers
/*
#include<iostream>
using namespace std;
int sumN(){
	int a;
	int b;
	cin>>a;
	cin>>b;
	int sum=a+b;
	return sum;
}
int main(){
	cout<<"sum is "<<sumN();
	return 0;
}
*/

//min of 2 number
/*
#include<iostream>
using namespace std;
int maxmin(){
	int c;
	int d;
	cin>>c>>d;
	if(c<d){
		return c;
	}
	else{
		return d;
	}
}
int main(){
	cout<<"minimum is "<<maxmin();
	return 0;
}*/

//sum from 1 to n
/*
#include<iostream>
using namespace std;
int sumN(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	return sum;
}
int main(){
	int n;
	cin>>n;
	cout<<"sum is "<<sumN(n);
	return 0;
}*/

//factorial
/*
#include <iostream>
using namespace std;
int fact(int n){
	int fac=1;
	for(int i=1;i<=n;i++){
		fac*=i;
	}
	return fac;
}
int main(){
	int a;
	cin>>a;
	cout<<"factorial of "<<a<<" is "<<fact(a);
	return 0;
}*/

//sum of digits of number eg: 123= 1+2+3
/*#include<iostream>
using namespace std;
int sumofdigits(int num){
	int digsum=0;
	while(num>0){
		int lastdigit= num%10;
		num/=10;
		digsum+=lastdigit;
	}
	return digsum;
}
int main(){
	int n;
	cin>>n;
	cout<<"sum is "<<sumofdigits(n);
	return 0;
}*/

//Calculate nCr Bionomial coefficiant for n&r
/*
#include<iostream>
using namespace std;
int factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact*=i;
	}return fact;
}
int nCr(int n, int r){
	int fact_n= factorial(n);
	int fact_r=factorial(r);
	int fact_nmr= factorial(n-r);
	return fact_n/(fact_r*fact_nmr);
	
}
int main(){
	int n=8, r=2;
	cout<<nCr(n,r)<<endl;
	return 0;
}
*/
