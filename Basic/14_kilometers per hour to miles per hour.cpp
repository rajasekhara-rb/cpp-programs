#include <iostream>
using namespace std;

// Write a program in C++ that converts kilometers per hour to miles per hour.

int main(){
	float kmph, mph;
	cout << "Enter the speed in KMPH : ";
	cin >> kmph;
	
	mph = kmph * 0.6213711;
	cout << "Speed in KMPH : "<<kmph<<" Km\/hr\n";
	cout << "Speed in MPH  : "<<mph <<" Miles\/hr\n";
	
	return 0;
}
