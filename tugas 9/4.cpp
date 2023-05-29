#include <iostream>
#include <string.h>

using namespace std;
int main(){
	char strng1 [20] = "Kageyama Tobio <3";
	char strng2 [20];
	
	cout << "Inisialisasi string : " << strng1;
	strcpy (strng2, strng1);
	cout << endl << "Hasil Copy \t    : " << strng2;
	
}