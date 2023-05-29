#include <iostream>
#include <math.h>
using namespace std;

int main () {
	int nilai;
	cout<<"masukan nilai: \t"<<endl;
	cin>>nilai;
	if (nilai <60){
		cout<<"\nMaaf Anda Tidak Lulus\n";
	}
	else{
		cout<<"\nSelamat Anda Lulus\n";
	}
	return 0;
}
