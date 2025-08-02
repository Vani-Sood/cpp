/*//area of square
#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	cout<<"area is "<<a*a;
}
*/

/*//min of 2 numbers
#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if(a<b){
		cout<<"a is minimum";
	}
	else{
		cout<<"b is minimum";
	}
}
*/


/*//odd or even
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n%2==0){
		cout<<"even";
	}
	else{
		cout<<"odd";
	}
}*/


/*//sum of number from 1 to n
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number ";
	cin>>n;
	int sum=0;
	for(int i=0;i<=n;i++)
	sum+=i;
	cout<<sum;
}
*/


/*// Prime or not
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int i;
    for (i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            cout << "Not prime";
            break;
        }
    }

    if (i == n) {
        cout << "Prime";
    }

    return 0;
}
*/

/*//Calculate SI
#include<iostream>
using namespace std;
int main(){
	int p,r,t;
	cout<<"enter p, r, t ";
	cin>>p>>r>>t;
	int si=(p*r*t)/100;
	cout<<"the si is "<<si;
}*/

/*//calculate factorial
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter the number ";
	cin>>n;
	int fact=1;
	for(int i=1;i<=n;i++){
		fact*=i;
	}
	cout<<"fact is "<<fact;
	return 0;
}
*/


// to find if person is eligible for driving or not
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter age ";
	cin>>n;
	if(n>=18){
		cout<<"the person is eligible";
	}
	else{
		cout<<"the person is not eligible";
	}
}

