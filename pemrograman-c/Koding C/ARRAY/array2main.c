#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
/*

int n[5];
int i,jumlah;
jumlah=0;
printf("%s%13s\n", "indeks", "nilai");
  for (i=1; i<=5; i++){
    printf("%3d",i);
    printf("%13s","");
    scanf("%d",&n[i-1]);
    jumlah += n[i-1];
  }
  printf("jumlah array : %4d\n",jumlah);  
*/
////////////////////////////////////////////////////////////////////////////////

 int i,j;
 int x[2][4]= {
        8,5,9,8,
        8,2,1,0
 };
 for (i=0; i<2; i++){
     for (j=0; j<4; j++){
         printf("%8d",x[i][j]);
     }
     printf("\n");
} 

////////////////////////////////////////////////////////////////////////////////
/*
 int i,j,baris,kolom;
 int x[4][6];
 printf("masukan baris: "); scanf("%d",&baris);
 printf("masukan kolom: "); scanf("%d",&kolom);
 puts("");
 for (i=0; i<baris; i++){
     for (j=0; j<kolom; j++){
         printf("masukan angka: "); scanf("%d",&x[i][j]);
     }
     printf("\n");
 }
 
 for (i=0; i<baris; i++){
     for(j=0; j<kolom; j++){
              printf("%8d",x[i][j]);
     }
     printf("\n");
} 
*/             
  system("PAUSE");	
  return 0;
}
