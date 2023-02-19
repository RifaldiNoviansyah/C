#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() 
{
  int a,b,kecil;
  printf ("masukan nilai a : "); scanf("%d",&a);
  printf ("masukan nilai b : "); scanf("%d",&b);
  	kecil = minimum(a,b);
  printf ("bilangan terkecil antara %d dan %d adalah %d\n\n",a,b,kecil);
}

int minimum(int a, int b)
{
	if (a < b)
		return(a);
	else
		return(b);
}
