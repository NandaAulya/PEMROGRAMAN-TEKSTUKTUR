#include <iostream>

using namespace std;

int main () {
	int n, total;
	cout << "----------------------------- " << endl;
	cout << "| Penjumlahan Deret Bilangan |" << endl;
	cout << "------------------------------" << endl;
	cout << endl << endl;
	
	cout << "Masukan jumlah bilangan : ";
	cin >> n;
	cout << endl;
	
	total = 1;
	cout << 1;
	
	for (int i = 2; i <= n; i++) {
		cout << " + " << i;
		total = total + i;
	}
	cout << " = " << total;
	
	cout << endl;
	
	return 0;
}