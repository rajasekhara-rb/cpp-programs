#include <iostream>
using namespace std;

// Write a C++ program to find the Area and Perimeter of a Rectangle.

int main(){
	int length, width ;
	cout << "Enter lenght of rectangle : ";
	cin >> length;
	cout << "Enter width of rectangle : ";
	cin >> width;
	
	int area = length * width;
	int perimeter = 2 * (length + width);
	cout << "Area of Rectangle = "<<area<<"\n";
	cout << "Perimeter of Rectangle = "<<perimeter<<"\n";
	
	return 0;
}
