#include <iostream>
using namespace std;

//Write a program in C++ to convert temperature in Kelvin to Fahrenheit.

int main(){
	float k, f;
	
	cout << "Enter temperature in Kelvin : ";
	cin >> k;
	
	f = (k - 273.15) * 9/5 + 32;
	cout << "Temperature in Fahrenheit : "<< f;
	
	return 0;
}
