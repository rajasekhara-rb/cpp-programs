#include <iostream>
using namespace std;

// Write a program in C++ to find the perfect numbers between 1 and 500.
//The perfect numbers between 1 to 500 are:
//6
//28
//496

int main(){
	
	int i = 1, u = 1, sum = 0; // declearing i, u, sum
	
	cout << "The perfect numbers between 1 to 500 are : ";
	cout << endl;
	
	while(i <= 500){ // outer loop for iterating form 1 to 500
		while(u <= 500){ //inner loop for checking the divisor of i
			if(u < i){
				if(i % u == 0){ // checking if u is a divisor of i?
					sum = sum + u;	// u is divisor of i adding u to sum
				}
			}
			u++; // incrementing u to loop
		}
		
		if(sum == i){
			cout << i << "\n"; //if sum is = i then i is perfect number 
		}
		i++; // outer loop incriment
		u = 1; // reset u to check for next iteration
		sum = 0; // reset sum to check for next iteration
	}
	return 0;
}
