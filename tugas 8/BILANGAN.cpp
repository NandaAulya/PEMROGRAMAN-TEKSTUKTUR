#include <iostream>
using namespace std;

int main()
{
	int array[5];
	int n;

	for (int n = 0; n < 5; n++) {
		cout << "Masukan Bilangan Ke-"<< n << " : ";
		cin >> array[n];
	}
	
	cout <<"\n";

	for (int n = 0; n < 5; n++) {
	cout << "Isi Bilangan Ke-";
	cout << n << " adalah : " << array[n] << endl;	
	}
	cout <<"\n";
	
	return 0;
}