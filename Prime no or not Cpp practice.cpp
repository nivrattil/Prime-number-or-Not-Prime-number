/* Check whether given number is prime number or not */
#include <iostream>
using namespace std;
int main(){
	int num, i, sum=0;
	cout<<"Enter a no:";
	cin>>num;
	for(i=1; i<num; i++){
	if(num%i==0){
	sum++;
	}
	}
	if(sum==1)
	cout<< "Entered number is prime";
	else
	cout<< "Entered number is not prime";
}
/* OR */
#include <iostream>
using namespace std;
int main()
{
	int i, num, sum;
	cout<< "Enter number: ";
	cin >> num;
	for(i=2; i<num; i++)
	{
		if(num%i==0){
		sum++;
		}
	}
	if(sum==1){
		cout<< "Prime Number";
	}
	else
	{
		cout<< "Not Prime Number";
	}
	return 0;
}
/* OR */
#include <iostream>
using namespace std;
int main(){
int num, i, Sum=0;
cout<<"Enter Number:";
cin>>num;
for(i=2; i<num; i++){
if(num%i==0){
Sum++;
}
}
if(Sum==0){
cout<<"num is prime";
}
else{
cout<<"num is not prime";
}
return 0;
}

