#include <iostream>

using namespace std;

int main () {

	cout << "---------------------------------- " << endl;
	cout << "| Looping Bintang Layang - Layang |" << endl;
	cout << "-----------------------------------" << endl;
	cout << endl << endl;
     
      for (int i = 0; i <= 5; i++) {
            for (int d = 5; d > i; d--)
                  cout << " ";
            for (int j = 0; j < i; j++)
                  cout << "* ";
            cout << "\n";
      }
      for (int i = 1; i < 5; i++) {
            for (int d = 0; d < i; d++)
                  cout << " ";
            for (int j = 5; j > i; j--)
                  cout << "* ";
           cout << "\n";
      }
      return 0;
}