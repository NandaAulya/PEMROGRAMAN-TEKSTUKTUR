#include <iostream>
#include <math.h>
using namespace std;
int main() {
	float bil1,bil2,penjumlahan,pengurangan,perkalian,pembagian,sisa;
	cout << "Masukan Bilangan 1: \t" ;
	cin >> bil1 ;
	cout << "Masukan Bilangan 2: \t" ;
	cin >> bil2 ;
	penjumlahan = bil1 + bil2 ;
	pengurangan = bil1 - bil2 ;
	perkalian = bil1 * bil2 ;
	pembagian = bil1 / bil2 ;
	sisa = (int)bil1 % (int) bil2 ;
	cout << "Hasil Penjumlahan: \t" << penjumlahan << endl ;
	cout << "Hasil Pengurangan: \t" << pengurangan << endl ;
	cout << "Hasil Perkalian: \t" << perkalian << endl ;
	cout << "Hasil pembagian: \t" << pembagian << endl ;
	cout << "Hasil Sisa: \t" << sisa << endl ;
	
	return 0 ;
}
