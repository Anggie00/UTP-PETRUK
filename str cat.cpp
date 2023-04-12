#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char firstName [50] = "Anggie ";
	char lastName [50] = "Armelia";
	char *fullName = strcat (firstName, lastName); 
	
	cout << fullName;
}
