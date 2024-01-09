#include <iostream>
#include <iomanip>
using namespace std;

//Write a program in C++ to test Type Casting.

int main(){
	
	int a = 5;
	int  b = 10;
	
	cout <<fixed<< setprecision(1);
	
	cout << "Type casting int to double \n";
	
	cout << b / (double)a << endl; // casting a before division.
	cout << (double)b / a << endl; // casting b before division
	cout << (double) (b/a) << endl; // casting type of the result
	
	double c = 5.5, d = 10.5;
	
	cout << "Type casting double to int \n";
	cout << (int)d/c << endl;
	cout << (int)(d/c)<<endl;
	
	return 0;
}
