#include <iostream>

using namespace std;

int main () {
	int n;
	
	cout << "--------------------------- " << endl;
	cout << "| Looping Segitiga Bintang |" << endl;
	cout << "----------------------------" << endl;
	cout << endl << endl;
	
	for (int i = 1; i <= 5; i++) {
		for (int j = 5; j > i; j--) {
			cout << " ";
		}
		
		for (int k = 1; k <= (2 * i - 1); k++) {
			cout << "*";
		}
		
		cout << endl;
	}
	
	return 0;
}