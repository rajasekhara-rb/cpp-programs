#include <iostream>
using namespace std;

//Write a C++ program to print a mystery series from 1 to 50.

int main(){
	int nm = 1;
	
	while(true){
		++nm;
		if((nm % 3) == 0)
			continue;
		if(nm == 50)
			break;
		if((nm % 2)==0){
			nm += 3;
		}else{
			nm -= 3;
		}
		cout << nm << " ";
	}
	return 0;
}
