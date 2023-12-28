#include <iostream>
using namespace std;
#include <cmath>

// Write a C++ program to find the area of any triangle using Heron's formula

int main(){
	float side1, side2, side3, s, area;
	
	cout << "length of side 1 = ";
	cin >> side1;
	cout << "length of side 2 = ";
	cin>>side2;
	cout << "length of side 3 = ";
	cin>>side3;
	
	s = (side1 + side2 + side3)/2; // finding the value of s as per Herons's formula
	
	area = sqrt(s * (s-side1) * (s-side2) * (s-side3)); // formaule of area of triange as per heron's
	
	cout << "Area of Triangle = "<<area;

	return 0;
}
