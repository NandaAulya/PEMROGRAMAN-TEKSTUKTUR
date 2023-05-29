#include<stdio.h>
#include<string.h>
 
int main(){
    char kalimat[150];
    int vokal=0;
    printf("Kalimat anda \t    : ");
    scanf("%[^\n]", kalimat);
    printf("kalimat terbaliknya : ");
    for(int panjang=strlen(kalimat);panjang>=1;panjang--){
        printf("%c", kalimat[panjang-1]);
        if(kalimat[panjang-1]==65 || kalimat[panjang-1]==97){
            ++vokal;
        }
        if(kalimat[panjang-1]==69 || kalimat[panjang-1]==101){
            ++vokal;
        }
        if(kalimat[panjang-1]==73 || kalimat[panjang-1]==105){
            ++vokal;
        }
        if(kalimat[panjang-1]==79 || kalimat[panjang-1]==111){
            ++vokal;
        }
        if(kalimat[panjang-1]==85 || kalimat[panjang-1]==117){
            ++vokal;
        }
    }
    printf("\npanjang kalimat     : %d\n", vokal);
}