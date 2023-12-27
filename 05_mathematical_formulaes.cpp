#include <iostream>
using namespace std;

//Write a C++ program that calculates the volume of a sphere.

int main(){
	int radiusOfSphere;
	cout <<"\n Calculate the volume of sphere : \n";
	cout <<"---------------------------------------\n";
	cout << "Enter the radius (r) of sphere : ";
	cin>>radiusOfSphere;
	
	float volumeOfSphere = (4 * 3.14 * radiusOfSphere * radiusOfSphere* radiusOfSphere )/3;
	cout << "Volume of Sphere : "<<volumeOfSphere;
	
	return 0;
}
