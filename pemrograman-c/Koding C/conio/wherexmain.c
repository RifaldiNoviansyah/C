#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[]) 
{
	int x;
    printf("Hello"); x = wherex();
    printf("Horizontal cursor position from where this text appears = %d\n",x);
    getch();
	system("pause");	
	return 0;
}
