#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	char nama[100],alamat[100],jurusan[100];
	int umur,nim,pilihan;
	printf("menu pilihan\n");
	printf("1. masukan data \n");
	printf("2. tampilkan data \n");
	printf("3. hapus file\n");
	printf("pilih salh satu menu diatas= ");  scanf("%d",&pilihan);
	switch(pilihan){
		case 1:{
				printf("biodata mahasiswa\n");fflush(stdin);
				printf("Masukkan nim    : "); scanf("%d", &nim); fflush(stdin);
				printf("Masukkan nama   : "); scanf("%[^\n]", &nama); fflush(stdin);
				printf("Masukkan umur   : "); scanf("%d", &umur); fflush(stdin);
    				printf("Masukkan alamat : "); scanf("%[^\n]", &alamat); fflush(stdin);
    				printf("Jurusan         : "); scanf("%[^\n]", &jurusan); fflush(stdin);
					FILE *out=fopen("ini.txt","a");
				fprintf(out," biodata mahasiswa \n");
    				fprintf(out,"===================\n");
				fprintf(out,"nim      = %d\n",nim);	
				fprintf(out,"nama     = %s\n",nama);
				fprintf(out,"umur     = %d\n",umur);
				fprintf(out,"alamat   = %s\n",alamat);
    				fprintf(out,"jurusan  = %s\n",jurusan);
    				fprintf(out,"===================\n");
				fclose(out);
				printf("Sukses menambah data.");
				getchar();
				break;
	}
		case 2:{
			FILE *in=fopen("ini.txt","r");
        		while(!feof(in)){
           		   		fscanf(in,"%d",&nim);fflush(stdin);   
           		   		fscanf(in,"%[^\n]",&nama);fflush(stdin);
           			   	fscanf(in,"%d", &umur);fflush(stdin);
           		   		fscanf(in,"%[^\n]",&alamat);fflush(stdin);
           			   	fscanf(in,"%[^\n]",&jurusan);fflush(stdin);
				printf("%d\n",nim);	
				printf("%s\n",nama);
				printf("%d\n",umur);
				printf("%s\n",alamat);
    				printf("%s\n",jurusan);
    			
        	}
			fclose(in);
			getchar();	
			break;
		}
		case 3:{
			if((unlink("d:\ini.txt"))==0){
				printf("file telah dihapus");
			}
				break;
		}
		default :{
			printf("pilihan tidak tersedia\n");
			break;
		}
	}
	return 0;
}

