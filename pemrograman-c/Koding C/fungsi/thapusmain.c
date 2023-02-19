#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const int MAX = 3;
int main () {
   int  var[] = {10, 100, 200};
   int i, *ptr[MAX];
   for ( i = 0; i < MAX; i++) {
      ptr[i] = &var[i];
   }
   
   for ( i = 0; i < MAX; i++) {
      printf("nilai [%d] = %d\n", i, *ptr[i] );
   }
   return 0;
}

