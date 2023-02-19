#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//funtion
int tukar(int *X,int *Y)
{
int Z;

Z = *X;
*X = *Y;
*Y = Z;
}
//utama
int main(int argc, char *argv[]){
int A,B;
	A=10;
	B=20;	
	printf("sebelum ditukar:\n");
	printf("A = %d\n",A);
	printf("B = %d\n",B);	
		tukar(&A,&B);
	printf("setelah ditukar:\n");
	printf("A = %d\n", A);
	printf("B = %d\n", B);
	return 0;
}

