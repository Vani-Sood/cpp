//to print 1st element of array
/*#include<iostream>
using namespace std;
int main(){
	int arr[5]={45,32,67,33,98};
	cout<<arr[0]<<endl;
	arr[0]= 55;
	cout<<arr[0]<<endl;
	cout<<sizeof(arr)/sizeof(int);  //to print size
	return 0;
}*/
//to print all the arrays using loop
/*#include<iostream>
using namespace std;
int main(){
	int size=5;
	int arr[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}*/

//to print smallest and largest
#include<iostream>
using namespace std;
int main(){
	int size=5;
	int num[size];
	for(int i = 0; i < size; i++){
		cin >> num[i];
	} 
	int smallest= INT_MAX;
	int largest = INT_MIN;
	for(int i=0;i<size;i++){
		smallest= min(num[i], smallest);
		largest= max(num[i],largest);
	}
	cout<<"smallest is: "<<smallest;
	cout<<"largest is: "<<largest;
	return 0;
}
