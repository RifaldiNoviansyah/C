#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 int n[10][10];
 int i;
 printf("%s%13s\n","indeks","nilai");
  for (i=0; i<=9; i++){
    printf("%3d",i+1);
    printf("%13s","");scanf("%d",&n[i-1]);
    }
  system("PAUSE");	  
  return 0;
}  
