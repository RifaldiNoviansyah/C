#include <stdio.h>
#include <stdlib.h>
int tukar(int *X,int *Y)
{
int Z;

Z = *X;
*X = *Y;
*Y = Z;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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



































/*
int hitung(int a, int *b){
    *b = 15;
    return a + *b;

}

/*
int main(int argc, char *argv[]) {
int y,a,hasil;
	y=20;
	a=0;
	printf(" fungsi belum dijalankan\n");	
	printf("y=%d\n",y);
	printf("a=%d\n",a);
    hasil=hitung(y,&a);
    ////////////////////////////////////////////////////////
	printf(" setelah fungsi diJalankan\n");
    printf("y=%d\n",y);
    printf("a=%d\n",a);
    printf("hasil=%d\n",hasil);
	return 0;
}
*/


