#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float jumlah(float,float);
int main() {
	float a, b, c;
	
	printf("masukan nilai a  : "); scanf("%f",&a);
	printf("masukan nilai b  : "); scanf("%f",&b);
		c = jumlah(a,b);
	printf("\n hasil penjumlahan a + b  %g\n", c);
}

float jumlah(float x ,float y)
{
	return(x + y);
}
