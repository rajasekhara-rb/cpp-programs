#include <iostream>
using namespace std;

// Write a C++ program to compute the total and average of four numbers 
//by taking all inputs as space sepetated like this => 25 25 25 25

int main(){
	int a, b, c,d;
	cout << "Enter all four numbers as space seperated in one line :";
	cin >> a>>b>>c>>d;
	
	int avg = (a+b+c+d)/4;
	
	cout << "Average of 4 numbers : "<<avg;
	
	return 0;
}
