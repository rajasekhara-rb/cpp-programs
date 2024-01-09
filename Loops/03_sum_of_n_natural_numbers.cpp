#include <iostream>
using namespace std;

// Write a program in C++ to display n terms of natural numbers and their sum.
int main(){
	
	int inp, i, sum = 0;
	cout << "Enter n to get sum of n natural numbers : ";
	cin>>inp;
	cout << "Natural numbers are : ";
	for(i=1; i<=inp; i++){
		cout << i<<" ";
		sum += i;
	}
	cout <<endl;
	cout << "Sum of n natural numbers : "<<sum;
	return 0;
}
