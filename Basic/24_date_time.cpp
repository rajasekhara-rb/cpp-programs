#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

//Write a C++ program to display the current date and time.

int main(){
	
	time_t t = time(NULL); // declearing time variavle and assigning current time
	tm* tPtr = localtime(&t); // creating pointer to tm structure 
	
	cout << "Current date and time : \n";
	cout << "Seconds : "<<(tPtr->tm_sec)<<"\n";
	cout << "Minutes : "<<(tPtr->tm_min)<<"\n";
	cout << "Hours : "<<(tPtr->tm_hour)<<"\n";
	cout << "Day of Month : "<<(tPtr->tm_mday)<<"\n";
	cout << "Month of Year : "<<(tPtr->tm_mon)+1<<"\n";
	cout << "Year : "<<(tPtr->tm_year)+1900<<"\n";
	cout << "Weekday : "<<(tPtr->tm_wday)<<"\n";
	cout << "Day of Year : "<<(tPtr->tm_yday)<<"\n";
	cout << "Daylight savings : "<<(tPtr->tm_isdst)<<"\n";
	
	cout <<endl;
	
	cout << "Current Date : "<<(tPtr->tm_mday)<<"/"<<(tPtr->tm_mon)+1<<"/"<<(tPtr->tm_year)+1900<<"\n";
	cout << "Current Time : "<<(tPtr->tm_hour)<<": "<<(tPtr->tm_min)<<": "<<(tPtr->tm_sec)<<"\n";
	return 0;
}
