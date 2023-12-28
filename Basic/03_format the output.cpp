#include <iostream>
using namespace std;
#include <iomanip>

//Write a C++ program to format the output.
int main(){
	cout << "Formatting the output : \n";
	cout << "----------------------- \n\n";
	double pi = 3.14159265; // declared pi value
	cout << "Value of pi = "<<pi<<"\n";
	cout << fixed << setprecision(4); // fixing output to 4 decimals
	cout << "Value of pi = "<<pi<<"\n";
	
	cout << "Value of pi 4 decimals total width 8   = |"<<setw(8) << pi<<"| \n";
	cout << "Value of pi 4 decimals total width 10  = |"<<setw(10) << pi<<"| \n";
	
	cout << setfill('-'); // setting the fill character to "-"
	cout << "Value of pi 4 decimals total width 8   = |"<<setw(8) << pi<<"| \n";
	cout << "Value of pi 4 decimals total width 10  = |"<<setw(10) << pi<<"| \n";
	
	cout << scientific; // setting the output to scientific notiation;
	cout << "Value of pi in scientific notiation is = "<<pi<<"\n";
	
	bool done = false; // initializing done with false;
	cout << "Vale of \'done\' in number = "<<done<<"\n";
	cout << boolalpha;
	cout <<"Value of \'done\' in alphabit = "<<done<<"\n";
	cout <<endl; // output a blank line for readability

	return 0;
}
