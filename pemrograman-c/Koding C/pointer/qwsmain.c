#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	char nama[100],alamat[100],jurusan[100];
	int umur,nim;
	printf("biodata mahasiswa\n");fflush(stdin);
	printf("Masukkan nim    : "); scanf("%d", &nim); fflush(stdin);
	printf("Masukkan nama   : "); scanf("%[^\n]", &nama); fflush(stdin);
	printf("Masukkan umur   : "); scanf("%d", &umur); fflush(stdin);
    printf("Masukkan alamat : "); scanf("%[^\n]", &alamat); fflush(stdin);
    printf("Jurusan         : "); scanf("%[^\n]", &jurusan); fflush(stdin);
	FILE *out=fopen("ini.txt","a");
	fprintf(out," biodata mahasiswa \n");
    fprintf(out,"===================\n");
	fprintf(out,"nama    = %d\n",nim);	
	fprintf(out,"nama    = %s\n",nama);
	fprintf(out,"umur    = %d\n",umur);
	fprintf(out,"alamat  = %s\n",alamat);
    fprintf(out,"alamat  = %s\n",jurusan);
    fprintf(out,"===================\n");
	fclose(out);
	printf("Sukses menambah data.");
	getchar();
        return 0;
}
