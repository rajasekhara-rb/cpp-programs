#include <iostream>
using namespace std;
//Write a C++ program that swaps two numbers.

int main(){
	int a, b, c; // declearing 3 variables
	cout << "Enter first value a :";
	cin >> a;
	cout << "Enter second value b :";
	cin >>b;
	c = a; // c is assigned value of a 
	a = b; // a is assigned value of b
	b = c; // b is assigned value of c which we have taken from a
	cout << "Value of \'a\' after swapping = "<<a<<"\n";
	cout << "Value of \'b\' after swapping = "<<b<<"\n";
	
	return 0;
}
