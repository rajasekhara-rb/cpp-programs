#include <iostream>
using namespace std;
#include <iomanip>

// Write a C++ program that calculates the volume of a sphere.

int main(){
	int radius;
	cout << "Enter the radius of sphere : ";
	cin>> radius; // radius of sphere taken as input
	float pi = 3.14; // pi value
	cout <<fixed <<setprecision(2); // set output decinal to 2
	// volume of sphere formule = 4/3 pi r x r x r
	float volume = (4 * pi * radius * radius * radius )/3; // volume of sphere calculated
	cout << "Volume of spheres with radius of "<<radius<<" is = "<<volume;
	
	return 0;
}
