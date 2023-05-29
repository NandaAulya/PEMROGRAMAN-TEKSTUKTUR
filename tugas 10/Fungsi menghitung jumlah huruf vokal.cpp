#include <iostream>
#include <string.h>
using namespace std;

int huruf_vokal=0;
void jumlah(char * kalimat){
for (int i=0;i<=strlen(kalimat);i++){
    if (kalimat[i]=='a'||kalimat[i]=='i'||kalimat[i]=='u'||kalimat[i]=='e'||kalimat[i]=='o'||kalimat[i]=='A'||
    kalimat[i]=='I'||kalimat[i]=='U'||kalimat[i]=='E'||kalimat[i]=='O'){
    huruf_vokal++;
    }
    }

}


int main (){

char a[100];
cout <<"Masukkan kalimat   : ";
cin.getline(a,200);
jumlah(a);
cout << "Jumlah Huruf Vokal : ";
cout<<huruf_vokal;
}