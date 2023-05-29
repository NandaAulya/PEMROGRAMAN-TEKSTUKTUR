#include <iostream>
#include <math.h>
 
using namespace std;

int main () {
	
	int biaya_langganan = 3000, biaya_tidak_berlangganan = 7000, penggunaan, per_1_meter = 50;
	int biaya_keterlambatan, total, keterlambatan = 2000, nk = 0;
	float pajak = 0.1;
	char langganan,terlambat;
	
	cout << "---------------------" <<endl;
	cout << "|    Tagihan Air    |" << endl;
	cout << "---------------------" << endl;
	cout << endl << endl;
	
	cout << "Masukan penggunaan air \t: ";
	cin >> penggunaan;
	cout << endl << endl;
	
	cout << "Apakah kamu berlangganan (y/n)? \t: ";
	cin >> langganan;
	cout << "Apakah kamu terlambat membayar (y/n)? \t : ";
	cin >> terlambat;
	cout << endl << endl;
	if (langganan == 'y') {
		total = biaya_langganan;
	}
	else {
		total = biaya_tidak_berlangganan;
	}
	if (terlambat == 'y') {
		biaya_keterlambatan += keterlambatan;
	}
	else {
		biaya_keterlambatan += nk;
	}
	cout << "Biaya langganan \t: " << total <<endl;
	cout << "Biaya keterlambatan \t: " << biaya_keterlambatan << endl;
	
	total += (penggunaan * per_1_meter) + terlambat;
	
	total += total + 0.1 ;
	
	cout << "Total tagihan \t: " << total << endl;
	
}