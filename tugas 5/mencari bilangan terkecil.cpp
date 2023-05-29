#include <iostream>

using namespace std ;

int main () {
	float bil1 ;
	float bil2 ;
	float bil3 ;
	float bil4 ;
	float terkecil;
	
	cout << "-----------------------------" << endl ;
	cout << "| MENCARI BILANGAN TERKECIL |" << endl ;
	cout << "-----------------------------" << endl ;
	cout << endl << endl ;
	
	cout << "bilangan pertama : " ;
	cin >> bil1 ;
	cout << "bilangan kedua   : " ;
	cin >> bil2 ;
	cout << "bilangan ketiga  : " ;
	cin >> bil3 ;
	cout << "bilangan keempat : " ;
	cin >> bil4 ;

	float deku ; // penampung bilangan terkecil
		
	if (bil1 <= bil2 && bil1 <= bil3 && bil1 <= bil4) {
		deku = bil1 ;
	}
	else if (bil2 <= bil3) {
		deku = bil2 ;
	}
	else if (bil3 <= bil4) {
		deku = bil3 ;
	}
	else {
		deku = bil4 ;
	}
	cout << "bilangan terkecil adalah " << deku ;
	
	}