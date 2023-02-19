#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
/*
int max=4;
char *names[] = {
      "RIFALDI NOVIANSYAH",
      "AGUNG SETIAWAN",
      "AFALDI MAULANA",
      "OSAS",
   }; 
   int i = 0;
    printf("\t\t\t keterhubungan pointer dan array\n");
   for ( i = 0; i<max; i++) {
      printf("nama ke %d = %s\t tersimpan di alamat %p \n", i, names[i],names[i]+1);
   }
*/
   int *p,i;
   int val[7] = {1,2,3,4,5,6,7 } ;
   p = &val[0];
   for (i=0; i<=6 ;i++ )
   {
      printf("urut ke[%d]: nilai %d alamat %p\n", i, *p, p);
      p++;
   }
   return 0;
}



