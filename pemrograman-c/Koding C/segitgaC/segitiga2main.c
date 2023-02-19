#include <stdio.h>
#include <stdlib.h>
int main()

{
    int a,b,c,T;
	printf("Program dasi kupu-kupu\n");
    printf("Inputkan: "); scanf("%i",&T);
	for (a=1;a<=T;a++){
		for (b=1;b<=a;b++)
			printf("*");
			for (c=1;c<=(2*(T-a));c++)
				printf(" ");
				for (b=1;b<=a;b++)
					 printf("*");
					 printf("\n");
					 }
	for (a=T-1; a>=1; a--){
		for (b=1;b<=a;b++)
			 printf("*");
			 for (c=1;c<=(2*(T-a));c++)
				  printf(" ");
				  for (b=1;b<=a;b++)
					   printf("*");
					   printf("\n");
	                  }   
system("pause");
}
