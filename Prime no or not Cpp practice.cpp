/* Check wether given number is prime number or not */
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
