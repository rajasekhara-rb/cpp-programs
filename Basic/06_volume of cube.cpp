#include <iostream>
using namespace std;

// Write a C++ program that calculates the volume of a cube.

int main(){
	float side;
	cout <<"Enter the side = ";	
	cin>>side;
	float volume = side * side * side;
	cout << "Volume of cube with side "<< side<< " is = "<<volume;
	return 0;
}
