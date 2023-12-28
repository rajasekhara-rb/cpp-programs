#include <iostream>
using namespace std;

//Write a C++ program to convert temperature in Celsius to Fahrenheit.

int main(){
	float c, f; // where f is fahrenheit and c is celsius
	cout << "Enter temperature in Celsius : ";
	cin >> c;
	f = (c * 9/5) + 32; // formula for converting celsius to fahrenheit 
	cout << "Temperature in Celsius    = "<<c<<"\n";
	cout << "Temperaturn in Fahrenheit = "<<f<<"\n";
	
	return 0;
}
