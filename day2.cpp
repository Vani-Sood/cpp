/*// to check if number is positive or negative
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	if(n>=0){
		cout<<"The number is positive";
	}
	else{
		cout<<"The number is negative";
	}
	return 0;
}
*/

//To check if person can vote
/*
#include<iostream>
using namespace std;
int main(){
	int age;
	cin>>age;
	if(age>=18){
		cout<<"The person can vote";
	}
	else{
		cout<<"The person can not vote";
	}
	return 0;
}
*/

//Check odd/even
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n%2==0){
		cout<<"the no. is even";
	}
	else{
		cout<<"the no. is odd";
	}
	return 0;
}
*/

//grades
/*#include<iostream>
using namespace std;
int main(){
	int marks;
	cin>>marks;
	if(marks>=90){
		cout<<"A";
	}
	else if(marks<90 && marks>=80){
		cout<<"B";
	}
	else if(marks<80 && marks>=70){
		cout<<"C";
	}
	else{
		cout<<"F";
	}
	return 0;
	
}*/

//to find if a char is in lowercase or uppercase

/*#include<iostream>
using namespace std;
int main(){
	char c;
	cin>>c;
	if(c>='A' && c<='Z')
	{
		cout<<"uppercase";
	}
	else if(c>='a'&&c<='z'){
		cout<<"lowercase";
	}
	else{
		cout<<"error";
	}
	return 0;
}*/

/*//print nos. 1 to 5 using while loop
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count=1;
	while(count<=n){
		cout<<count<<endl;
		count++;
	}
	return 0;
}
*/
/*//print nos. 1 to 5 using for loop
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<i<<endl;
	}
	return 0;
}
*/
/*//to print series like 1,3,5,7
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i=i+2){
		cout<<i<<endl;
	}
	return 0;
}
*/

/*//to print sum from 1 to n
#include<iostream>
using namespace std;
int main (){
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	cout<<sum;
	return 0;
}*/

/*//sum of all odd numbers till n
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum=0;
	for(int i=0;i<=n;i++){
		if(i%2!=0){
			sum+=i;
		}
	}
	cout<<"sum is "<<sum;
}
*/


