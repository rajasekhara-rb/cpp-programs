#include <iostream>
using namespace std;

//Write a C++ program to find the area and circumference of a circle.

int main(){
	float radius, area, circumfrence, pi;
	pi = 3.14; // value of pi
	cout << "Enter radius of the circle : ";
	cin>> radius;
	area = pi * radius * radius; // area of circle 
	circumfrence = 2 * pi * radius; // circumfrence of circle
	cout << "Area of Cirlce = "<<area<<"\n";
	cout << "Circumfrence of Circle = "<<circumfrence<<"\n";
	return 0;
}

