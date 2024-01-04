#include <iostream>
using namespace std;

// Write a C++ program to compute the quotient and remainder.

int main(){
	int dividend, divisor, quotient, remainder;
	cout << "Enter dividend : ";
	cin >> dividend;
	cout << "Enter divisor  : ";
	cin >> divisor;
	
	quotient = dividend / divisor;
	remainder = dividend % divisor;
	cout << "Quotient  : "<<quotient<<"\n";
	cout << "Remainder : "<<remainder<<"\n";
	return 0;
}
