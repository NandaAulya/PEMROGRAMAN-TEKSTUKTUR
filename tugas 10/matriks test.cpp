#include <iostream>
using namespace std;

void kali(int arr1[2][2],int arr2[2][2]){
    int hasil[2][2]={0};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                hasil[i][j]+=arr1[i][k]*arr2[k][j];
            }  
        }
    }
    cout<<"Hasil perkalian matriks : "<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<hasil[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    int martiks1[2][2],martiks2[2][2];

// INPUT MATRIKS KE 1
    cout<<"MATRIKS KE 1 : "<<endl;
    cout<<"Isi nilai matriks baris pertama : ";
    for (int i = 0; i < 2; i++)
    {
        cin>>martiks1[0][i];
    }
    cout<<"Isi nilai matriks baris kedua : ";
    for (int i = 0; i < 2; i++)
    {
        cin>>martiks1[1][i];
    }

// INPUT MATRIKS KE 2
    cout<<"MATRIKS KE 2 : "<<endl;
    cout<<"Isi nilai matriks baris pertama : ";
    for (int i = 0; i < 2; i++)
    {
        cin>>martiks2[0][i];
    }
    cout<<"Isi nilai matriks baris kedua : ";
    for (int i = 0; i < 2; i++)
    {
        cin>>martiks2[1][i];
    }
    
    kali(martiks1,martiks2);
}