#include <iostream>
using namespace std;

//Write a program in C++ to check whether a number is prime or not.

int main(){
	int num, ctr = 0;
	cout << "Enter a number : ";
	cin>>num;
	
	for(int i=1; i<=num; i++)
	{
		if(num % i == 0){
			ctr++;
		}
	}
	
	if(ctr == 2){
		cout << "Entered number is Prime \n";
	}else{
		cout << "Entered number is not a Prime \n";
	}
	return 0;
}
