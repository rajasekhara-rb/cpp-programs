#include <iostream>
using namespace std;

//Write a program in C++ to check whether a number is positive, negative or zero.

int main(){
	int num;
	cout << "Enter a number : ";
	cin >> num;
	
	if(num > 0){
		cout << "Number is Positive \n";
	}else if(num < 0){
		cout << "Number is Negative \n";
	}else{
		cout << "Entered number is Zero \n";
	}
	
	return 0;
}
