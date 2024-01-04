#include <iostream>
using namespace std;

//Write a program in C++ to convert temperature in Celsius to Kelvin.

int main(){
	float c, k;
	cout << "Enter temperature in Celsius : ";
	cin >> c;
	
	k = c + 273.15;
	cout << "Temperature in Kelvin : "<< k;
	return 0;
}


