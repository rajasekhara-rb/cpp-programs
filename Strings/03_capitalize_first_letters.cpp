#include <iostream>
#include <string>
using namespace std;

// Write a C++ program to capitalize the first letter of each word in a given string.
// Words must be separated by only one space.

int main(){
	
	string str = "this is a normal one";
	
	for(int i=0; i<str.length(); i++){
		if(i == 0){
			str[i] = toupper(str[i]);
		}else if(str[i-1] == ' '){
			str[i] = toupper(str[i]);
		}
	}
	
	//	return str;
	cout << str;
	
	return 0;
}
