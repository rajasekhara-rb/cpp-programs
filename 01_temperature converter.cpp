#include <iostream>
#include <string>
using namespace std;

	//note here 
	//c = Celsius
	//f = Fahrenheit 
	//k = Kelvin 

//c++ prrogram to convert celsius to fahrenheit
float c_f(float c){
	float f;
	return f = c*(9.0/5.0) + 32.0;
}

//c++ prrogram to convert fahrenheit to celsius
float f_c(float f){
	float c;
	return c = f - 32.0 *(5.0/9.0);
}

float c_k(float c){
	float k;
	return k = c + 273.15;
}

//celsius to kelvin

float c_k(float c){
	float k;
	return k = c + 273.15;
}

//kelvin to celsius
float k_c(float k){
	float c;
	return c = k - 273.15;
}

int main(){
	float input;
	int op;
	
	cout << "Enter 1 for C to F or 2 for F to C = ";
	cin >> op;
	cout << "Enter a value to convert = ";
	cin >> input;
	if(op == 1){
		cout << "Temperature in C = "<< input<<" and F = "<<c_f(input)<<"\n";
	}else if(op == 2){
		cout << "Temperature in F = "<< input<<" and C = "<<f_c(input)<<"\n";
	}else{
		cout<<"Error please try again with correct values \n";
	}
		 	
//	if(){
//		float opt;
//		opt = c_f(ip_val);
//		cout << "Temperature in F = "<<inp<<" and in C = "<<opt<<"\n";
//	}else{
//		float opt;
//		opt = f_c(ip_val);
//		cout << "Temperature in C = "<<inp<<" and in F = "<<opt<<"\n";
//	}
	return 0;
}
