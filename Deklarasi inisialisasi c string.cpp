#include <iostream>
using namespace std;

int main(){
	char nama[15]="anggie";
	char prodi[]="ilkomp";
	
	cout<<nama<<endl;
	cout<<sizeof(nama)<<endl;
	
	cout<<prodi<<endl;
	cout<<sizeof(prodi)<<endl;
	
	for(int i = 0; i < sizeof(prodi); i++){
		cout<<prodi[i]<< " "<<(prodi[i]== '\0'?"Nul": "Not Null")<<endl;
	}
}
