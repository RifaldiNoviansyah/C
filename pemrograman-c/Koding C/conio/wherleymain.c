#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[]) 
{
	int y;
 
    printf("Hello\n");
    y = wherey();
    printf("Vertical cursor position from where this text appears = %d",y);
    getch();
	system("pause");	
	return 0;
}
