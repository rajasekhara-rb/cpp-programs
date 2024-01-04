#include <iostream>
using namespace std;

//Write a program in C++ to convert temperature in Fahrenheit to Kelvin.

int main(){
	
	float f, k;
	
	cout << "Enter Temperature in Fahrenheit : ";
	cin >> f;
	
	k = (f - 32) * 5/9 + 273.15;
	
	cout << "Temperature in Kelvin : "<<k;
	
	return 0;
}
