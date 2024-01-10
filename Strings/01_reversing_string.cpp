#include <iostream>
#include <string>
using namespace std;

//Write a C++ program to reverse a given string.

string reverseString(string str){
	string temp_str = str;
	int index_pos = 0;
	for(int i = temp_str.length()-1; i>=0; i--){
		str[index_pos] = temp_str[i];
		index_pos++;
	}
	return str;
}

int main(){
	string ip;
	cout << "Enter a string : ";
	cin>>ip;
//	cout <<reverseString("Python");
	cout << reverseString(ip);
	return 0;
}
