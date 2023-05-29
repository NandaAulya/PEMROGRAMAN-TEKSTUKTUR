#include <iostream>
#include <conio.h>
using namespace std;

class year {
	public :
		void kabisat();
	private :
		int year;
};

void year::kabisat(){
	cout << "Tahun : ";
	cin >> year;
    // tahun / 4 = 0
	if (year % 4 == 0){
		cout << "\n" << year << " adalah tahun kabisat \n";
	}
	// tahun / 100
	else if (year % 100 == 0){
		cout << "\n" << year << " bukan tahun kabisat \n";
	}
	else if (year % 400 == 0){
		cout << "\n" << year << " bukan tahun kabisat \n";
	}
	else {
		cout << "\n" << year << " bukan tahun kabisat \n";
	}
}

int main (){
	year apa;
	apa.kabisat();
	getch();
}
