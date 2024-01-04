#include <iostream>
using namespace std;

//Write a C++ program to input a single-digit number and print it in a rectangular form of 4 columns and 6 rows.

int main(){
	
	int a;
	cout << "Enter any number :";
	cin>> a;
		
	cout << " "<<a<<" "<<a<<" "<<a<<" "<<a<<"\n";
	cout << " "<<a<<" "<<" "<<" "<<" "<<" "<<a<<"\n";
	cout << " "<<a<<" "<<" "<<" "<<" "<<" "<<a<<"\n";
	cout << " "<<a<<" "<<" "<<" "<<" "<<" "<<a<<"\n";
	cout << " "<<a<<" "<<" "<<" "<<" "<<" "<<a<<"\n";
	cout << " "<<a<<" "<<a<<" "<<a<<" "<<a<<"\n";
	
	return 0;
}
