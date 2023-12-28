#include <iostream>
using namespace std;

// Write a C++ program that calculates the volume of a cylinder.

int main(){
	int radius, height;
	cout << "Enter the radius of cylinder = ";
	cin>>radius;
	cout << "Enter the height of cylinder = ";
	cin >> height;
	//volume of culinder = pi r x r x h
	float volume = 3.14 * radius * radius * height;
	cout << "Volume of cylinder = "<<volume;
	return 0;
}
