#include <iostream>
using namespace std;
#include <cmath>
#define PI 3.14159 // defining the value of PI as a constant

//Write a C++ program to find the area of the Scalene Triangle.

int main(){
	int s1, s2, angle;
	float area;

	cout << "Side 1 : ";
	cin >> s1;
	cout << "Side 2 : ";
	cin >> s2;
	cout << "Angle between the sides : ";
	cin >> angle;	
// formula for area of scalen triangle = area = side1*side2* sin(angle)/2;
	
	area = (s1 * s2 * sin((PI/180) * angle))/2;
	cout << "Area of scalen triangle : "<< area;
	return 0;
}







