#include <iostream>
using namespace std;

// Write a program in C++ to find the sum of the first 10 natural numbers.

int main(){
	
	int i , sum=0;
	cout << "The natural numbers are : ";
	for(i=1; i<=10;i++){
		cout <<i <<" ";
		sum += i;
	}
	cout <<endl;
	cout << "Sum of first 10 natural numbers : "<<sum;
	return 0;
}


