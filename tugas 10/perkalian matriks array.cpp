#include <iostream>
using namespace std;

void kali(int matriks1_07573[2][2],int matriks2_07573[2][2]){
    int hasil[2][2]={0};
    for (int i_07573 = 0; i_07573 < 2; i_07573++)
    {
        for (int j_07573 = 0; j_07573 < 2; j_07573++)
        {
            for (int k_07573 = 0; k_07573 < 2; k_07573++)
            {
                hasil[i_07573][j_07573]+=matriks1_07573[i_07573][k_07573]*matriks2_07573[k_07573][j_07573];
            }
        }
    }
    cout << "\n\n";
    cout<<"Hasil perkalian : \n\n";
    for (int i_07573 = 0; i_07573 < 2; i_07573++)
    {
        for (int j_07573 = 0; j_07573 < 2; j_07573++)
        {
            cout<<hasil[i_07573][j_07573]<<" ";
        }
        cout<< "\n";
    }

}

int main(){
    int martiks1_07573[2][2],martiks2_07573[2][2];

// INPUT MATRIKS KE 1
    cout<<"MATRIKS 1 \n\n";
    cout<<"Baris Pertama : ";
    for (int i_07573 = 0; i_07573 < 2; i_07573++)
    {
        cin>>martiks1_07573[0][i_07573];
    }
    cout<<"Baris Kedua   : ";
    for (int i_07573 = 0; i_07573 < 2; i_07573++)
    {
        cin>>martiks1_07573[1][i_07573];
        cout << "\n";
    }

// INPUT MATRIKS KE 2
    cout<<"MATRIKS 2 \n\n";
    cout<<"Baris Pertama : ";
    for (int i_07573 = 0; i_07573 < 2; i_07573++)
    {
        cin>>martiks2_07573[0][i_07573];
    }
    cout<<"Baris Kedua   : ";
    for (int i_07573 = 0; i_07573 < 2; i_07573++)
    {
        cin>>martiks2_07573[1][i_07573];
    }

    kali(martiks1_07573,martiks2_07573);
}
