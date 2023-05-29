#include <stdio.h>
#define MAXCOL 10
#define MAXROW 10

void cetakMatriks( int a[][MAXCOL],int brs, int kol)
{
    int i, j;
    for (i=0;i<brs;i++)
    {
        for (j=0;j<kol;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

int a[MAXROW][MAXCOL],b[MAXROW][MAXCOL],c[MAXROW][MAXCOL] ;
int main()
{
    int i,j,k, nbaris,nkolom;
    nbaris=2;
    nkolom=2;
    printf("=============================\n");
    printf("Perkalian Matriks AxB =C \n");
    printf("=============================\n");
    printf("Masukkan matriks A: \n");
    for (i=0;i<nbaris;i++)
        for(j=0;j<nkolom;j++)
        {
            printf("a[%d%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    printf("\n");

   //memasukkan matriks b
    printf("Masukkan matriks B: \n");
    for (i=0;i<nbaris;i++)
        for(j=0;j<nkolom;j++)
        {
            printf("b[%d%d]=",i,j);
            scanf("%d",&b[i][j]);
        }

    printf("\n");
    //pross perkalian/
    for(i=0; i<nbaris; i++)
        for (j=0; j<nkolom;j++)
        {
            c[i][j]=0;
            for(k=0; k<nkolom;k++)
         c[i][j]+= (a[i][j]*b[i][j]);
         }
     printf("Hasil Perkalian matriks (C):\n");
     cetakMatriks(c,nbaris,nkolom);
    }