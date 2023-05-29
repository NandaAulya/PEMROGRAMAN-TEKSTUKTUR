#include <iostream>
#include <math.h>
using namespace std;
int main () {
	float a,b ;
	cout << "Masukan Suatu Bilangan: \t" ;
	cin >> a ;
	cout << "Jumlahkan Bilangan Tersebut: \t"  ;
	cin>>b;
	a+=b;
	cout << "Hasil: \t" << a << endl ;
	cout << "Hasil Sebelumnya Dikurangkan: \t" ;
	cin>>b;
	a-=b;
	cout << " Hasil: \t" << a << endl ;
	cout << "Hasil Sebelumnya Dikalikan: \t" ;
	cin>>b;
	a*=b;
	cout << "Hasil: \t" << a << endl ;
	cout << "Hasil Sebelumnya Dibagikan: \t" ;
	cin>>b;
	a/=b;
	cout << "Hasil: \t" << a << endl ;
	cout << "Sisa Hasil Tadi Dibagi Dengan: \t" ;
	cin >> b ;
	a=(int)a%(int)b;
	cout << "Hasil: \t" << a << endl ;
	
	return 0 ;	
}
