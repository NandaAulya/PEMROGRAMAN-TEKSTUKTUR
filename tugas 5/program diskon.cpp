#include <iostream>

using namespace std ;

int main (){
	int total_pembelian, jumlah_barang ;
	cout << "total pembelian : " ;
	cin >> total_pembelian;
	cout << "jumlah_barang   : " ;
	cin >> jumlah_barang;
	
	if (total_pembelian >= 500000 && jumlah_barang>=5){
		cout << "selamat anda mendapatkan bonus setrika" ;
	}
	else if (total_pembelian>=100000 && jumlah_barang>=3){
		cout << "selamat anda mendapatkan bonus payung" ;
	}
	else if (total_pembelian>=50000 && jumlah_barang>=2){
		cout << "selamat anda mendapatkan bonus bolpoin" ;
	}
	else { cout << "tidak mendapat bonus";
	}
}