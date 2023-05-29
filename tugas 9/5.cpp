#include <stdio.h>
#include <string.h>
int main(){
  char stringPertama[50], stringKedua[50];
  printf("String Pertama : ");
  fgets(stringPertama, sizeof(stringPertama), stdin);
  printf("String Kedua   : ");
  fgets(stringKedua, sizeof(stringKedua), stdin);
  if (strcmp(stringPertama, stringKedua) == 0){
    printf("Kedua string sama.\n");
  }
  else {
    printf("Kedua string tidak sama.\n");
  }
  return 0;
}