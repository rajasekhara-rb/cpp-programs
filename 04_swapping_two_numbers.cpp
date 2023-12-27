#include <iostream>
using namespace std;

int main(){
	int a, b;
	int z;
	cout << "Enter value of a = ";
	cin >> a;
	cout << "Enter value of b = ";
	cin>>b;
	z = a;
	a = b;
	b = z;
	cout << "After swapping a = "<<a<<"\n";
	cout << "after swapping b = "<<b<<"\n";
	
	return 0;
}
