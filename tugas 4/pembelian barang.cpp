#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	
	//harga bolpoin   = Rp.3000
	//harga pensil    = Rp.2500
	//harga penghapus = Rp.2000
	//total harga sebelum diskon
	//diskon >= 50000
	//hitung total harga setealah diskon
	//buat program
	//gunakan percabangan(ifelse / switch)
	
	float bolpoin = 3000 , pensil = 2500 , penghapus = 2000 , jumlah , r , y , u ;
	
	cout << "------------------------" << endl;
	cout << "|KOPERASI MINI HIROTAKA|" << endl;
	cout << "------------------------" << endl;
	cout << endl << endl ;
	cout << "PILIH BARANG YANG MAU DIBELI : " << endl ;
	cout << "-------------------------------" << endl ;
	cout << endl << endl ;
	
	cout << " 1. Bolpoin   = Rp.3000 " << endl ;
	cout << " 2. Pensil    = Rp.2500 " << endl ;
	cout << " 3. Penghapus = Rp.2000 " << endl ;
	cout << endl << endl ;	
	
	cout << "===================================" << endl ;
	cout << " Jumlah Barang Yang Ingin Dibeli : " << endl ;
	cout << "===================================" << endl ;
	cout << endl << endl ;
	cout << " jumlah bolpoin   : " ;
	cin >> r ;
	cout << " jumlah penghapus : " ;
	cin >> y ;
	cout << " jumlah pensil    : " ;
	cin >> u ;
	jumlah = ( r * bolpoin ) + ( y * pensil ) + ( u * penghapus ) ;
	cout << endl ;
	
	if (jumlah >= 50000) {
		float diskon = 30 ;
		cout << "*******************************************************" ;
		cout << endl << endl ;
		cout << " Selamat Anda Mendapatkan Diskon Sebesar 30% " << endl ;
		cout << " jumlah harga = " << jumlah  << endl;
		cout << " jumlah harga setelah diskon = " << jumlah - (( jumlah / 100 )) * diskon ;
		cout << endl << endl ;
		cout << "*******************************************************" ;
		cout << endl << endl ;
		cout << "=========================================================" << endl ;
		cout << "| Terimakasih Telah Berbelanja Dikoperasi Mini Hirotaka |" << endl ;
		cout << "=========================================================" << endl ;
		cout << endl << endl ;
	}
	
	else {
		cout << "-------------------------------------" << endl ;
		cout << " jumlah harga = " << jumlah << endl ;
		cout << "-------------------------------------" << endl ;
		cout << endl << endl ;
		cout << "==============================================================" << endl ;
		cout << "| Terimakasih Telah Berbelanja Dikoperasi Mini Kami Hirotaka |" << endl ;
		cout << "==============================================================" << endl ;
	}
}
