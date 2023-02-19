
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float minimum(float,float);
main() 
{
  float a,b,kecil;
  printf ("masukan nilai a : "); scanf("%f",&a);
  printf ("masukan nilai b : "); scanf("%f",&b);
  	kecil = minimum(a,b);
  printf ("bilangan terkecil antara %g dan %g adalah %g\n\n",a,b,kecil);
}

float minimum(float b,float a)
{
	if (a < b)
		return(a);
	else
		return(b
		)
		;
}


