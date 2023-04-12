#include <iostream>
#include <cstring>
using namespace std;
	int main() {
		char* endptr;
		char str1[] = "00011010John";
		long value1 = strtol(str1, &endptr, 2); 
		cout << "The converted value is "<< value1 << endl;
		cout << "Unconverted part: " << endptr << endl;
		
		char str2[] = "1CZidan";
		long value2 = strtol(str2, &endptr, 16); 
		cout << "The converted value is " << value2 << endl;
		cout << "Unconverted part: "<< endptr << endl;
		
		char str3[]="40Raziq";
		long value3 = strtol (str3, &endptr, 10);
		cout << "The converted value is" << value3 << endl;
		cout << "Unconverted part: "<< endptr << endl;
}
