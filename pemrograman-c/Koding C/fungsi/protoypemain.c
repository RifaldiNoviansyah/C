#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float jumlah(float,float);

int main(int argc, char *argv[]) {
   float a,b,c;
   printf("masukan angaka pertama = "); scanf("%g",&a);
   printf("masukan angaka pertama = "); scanf("%g",&b);
      c = jumlah(a,b);
   printf("hasila penjumlahan dari %g dan %g adalah %g",a,b,c);
}

float jumlah(float a, float b){
	return(a + b);
}

