#include<iostream>
using namespace std;
main(){
	int num;
	long long factorial=1;
	cout<<"Enter the number: ";
	cin>>num;
	
	for(int i=1;i<=num;i++){
		factorial = factorial * i;
	}
	cout<<"Factorial of "<<num<<" is "<< factorial << endl;
return 0;
}
