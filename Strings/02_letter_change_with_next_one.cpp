#include <iostream>
#include <string>
using namespace std;

//Write a C++ program to change every letter in a given string 
//with the letter following it in the alphabet 
//(i.e. a becomes b, p becomes q, z becomes a).

string letterChange(string str){
	
	for(int i=0; i<=str.length()-1; i++){
		int char_code = int(str[i]);
		
		if(char_code == 90){
			str[i] = char(65);
		}else if(char_code == 122){
			str[i]=char(97);
		}else if(char_code >= 65 && char_code<=90 || char_code>=97 && char_code <=122){
			str[i] = char(char_code + 1);
		}
	}
	return str;
}

int main(){
	
	string str;
	cout<<"Enter a string : ";
	cin >> str;
	
	cout << letterChange(str);
	
	return 0;
}
