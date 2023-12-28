#include <iostream>
using namespace std;

//Write a C++ program to convert temperature in Fahrenheit to Celsius.

int main(){
	float f, c; // where f is fahrenheit and c is celsius
	cout << "Enter the temperature in Fahrenheit : ";
	cin>> f;
	c = (f - 32) * 5/9; // formula for convering Fahrenheit to celsius
	cout << "Temperature in Fahrenheit = "<<f<<"\n";
	cout << "Temperature in Celsius    = "<<c<<"\n";
	
	return 0;
}
