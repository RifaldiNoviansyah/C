#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
/*float nilai, *alamat=&nilai;
	nilai =15.55;
	printf("nilai %.2f berada dialama %p",nilai,alamat);
*/
/*
char *alamat_buku, buku1,buku2,buku3;
buku1 = 'b';	 //berisi b
alamat_buku=&buku1; //buku1 disimpan di alamat_buku=b
buku2=buku1; //berisi b
buku3=*alamat_buku; //buku3 beisi b
printf("nilai var buku 1 = %c\n",buku1);
printf("nilai var buku 2 = %c\n",buku2);
printf("nilai var buku 3 = %c\n",buku3);
printf("nilai var buku 1 ada di alamat = %p\n",alamat_buku);
*/
/*
float nilai1,nilai2,nilai3,*penunjuk;
nilai1 = 123;
nilai2 = 345;
nilai3 = 678;
penunjuk = &nilai1;

printf("nilai %.2f di alamat memori %p\n",*penunjuk,penunjuk);
printf("nilai %.2f di alamat memori %p\n",(*penunjuk+1),penunjuk+1);
printf("nilai %.2f di alamat memori %p\n",(*penunjuk+2),penunjuk+2);
*/
int *p_awal, *p_akhir;
int x[5] = {25,15,55,5,75},i;

p_awal  = &x[0];
p_akhir = &x[4];

printf("alamat nilai elemen x[0] : %p\n",p_awal);
printf("alamat nilai elemen x[4] : %p\n",p_akhir);
printf("dari x[0] x[4] ada %d elemen\n\n",p_akhir-p_awal);

for(i=0;i<=4;i++){
	printf("nilai elemen ke %d adalah %d di alamat %p\n",i,x[i],p_awal);
	p_awal += 1;
	
}

return 0;
}
