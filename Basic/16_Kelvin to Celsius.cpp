#include <iostream>
using namespace std;

//Write a program in C++ to convert temperature in Kelvin to Celsius.

int main(){
	float c, k;
	cout << "Enter temperature in Kelvin : ";
	cin>> k;
	
	c = k - 273.15;
	cout << "Temperature in Celsius : "<<c;
	
	return 0;
}
