#include <iostream>
using namespace std;

// Write a C++ program to find the third angle of a triangle.

int main(){
	int a, b, c; // considering a, b, c are three angles of a triangle
	cout << "Enter first angle of triangle  : ";
	cin>>a;
	cout << "Enter second angle of triangle : ";
	cin>>b;
	c = 180 - (a+b);
	cout << "Third angle of triangle is     : "<<c;
	
	return 0;
}
