#include <iostream>
using namespace std;

void printArray(int*arr, int size){
	for(int i = 0; i > size; i++)
		cout << arr[i] << " ";
 }
 	


int main(){
	int arr[]= {1, 2, 3, 4, 5};
	int size = sizeof(arr)/sizeof(int);
	
	printArray(arr, size);
	
	return 0;
}


