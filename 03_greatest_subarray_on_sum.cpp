#include <iostream>
using namespace std;

//find the greatest sub arry based on it sum 

int main(){
	int arr[4][3] = {{1, 3, 4},{5, 6, 7},{9, 9, 1},{0, 1, 45}};
	int tempArr[4] = {0};
	
		
	for(int i=0; i<sizeof(arr)/sizeof(int); i++){
//		int val = 0;
//		for(int j = 0; j<sizeof(arr[i])/sizeof(int); j++){
//			val += arr[i][j];
//		}
//		tempArr[i] = val;
		cout<<arr[i]<<"\n";
	}
	
//	int index = 0;
//	int max;
//	for(int k=0; k<sizeof(tempArr)/sizeof(int); k++){
//		if(tempArr[k] > max){
//			max = tempArr[k];
//			index++;
//		}	
//	}
	cout<<"temp sums = "<<tempArr[5]<<"\n";
//	cout << "highest sum of the subarrays = "<<max<<" at index = "<<index<<"\n";
	return 0;
}
