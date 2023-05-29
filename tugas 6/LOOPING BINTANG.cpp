#include <iostream>

using namespace std;

int main () {
	
	cout << "------------------------------------ " << endl;
	cout << "| Looping Bintang Segitiga Terbalik |" << endl;
	cout << "-------------------------------------" << endl;
	cout << endl << endl;
	
	for (int i = 1; i <= 10; i++) {
		for (int j = 10; j >= i; j--){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}