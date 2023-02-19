#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	char nama[100];
	int umur;
	printf("Masukkan nama : "); scanf("%[^\n]", &nama); fflush(stdin);
	printf("Masukkan umur : "); scanf("%d", &umur); fflush(stdin);

	FILE *out=fopen("test.txt","w");
	fprintf(out,"%s#%d\n",nama, umur);
	fclose(out);
	printf("Sukses menambah data.");
	getchar();
        return 0;
}
