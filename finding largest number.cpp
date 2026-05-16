#include<iostream>
using namespace std;
main(){
	int a,b,c;
	cout<<"Enter three numbers: ";
	cin>> a >> b >> c;
	
	if (a>=b && a>=c){
		cout<<a<<" is the largest number"<<endl;
	}
	else if(b>=a && b>=c){
		cout<<a<<" is the largest number"<<endl;
	}
	else{
		cout<<c<<" is the largest number"<<endl;
	}
	
}
