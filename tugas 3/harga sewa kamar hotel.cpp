#include <iostream> 
using namespace std;

int main (){
	int pilih,lama; 
	
	cout<<"## PILIH KAMAR HOTEL ##"<<endl;
	cout<<"======================="<<endl;
	cout<<"1.Deluxe room \n";
	cout<<"2.Suite room \n";
	cout<<"3.Top Suite room \n"<<endl;
	cout<<"Pilih Kamarmu: \t"<<endl;
	cin>>pilih;
	cout<<"Lama Menginap: \t"<<endl;
	cin>>lama;
	switch (pilih){
		case 1 :
			cout<<"anda memilih Deluxe \t"<<endl;
			cout<<"total harga yang perlu dibayar"<<endl<<500000*lama;
			break;
		case 2:
			cout<<"anda memilih Suite Room"<<endl;
			cout<<"total harga yang perlu dibayar"<<endl<<1000000*lama;
			break;
		case 3:
			cout<<"anda memilih Top Suite Room"<<endl;
			cout<<"total harga yang perlu dibayar"<<endl<<1500000*lama;
			break; 
			
			
	}
	
}
