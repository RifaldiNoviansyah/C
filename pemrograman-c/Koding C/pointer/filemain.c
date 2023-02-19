#include <stdio.h>

int hitung(int a, int *b){
    *b = 15;
    return a + *b;

}

main(){
    int y,a,hasil;
    y=20;
    a=0;
    printf(" fungsi belum dijalankan\n");
    printf("y=%d\n",y);
    printf("a=%d\n",a);
    hasil=hitung(y,&a);
    printf(" setelah fungsi diJalankan\n");
    printf("y=%d\n",y);
    printf("a=%d\n",a);
    printf("hasil=%d\n",hasil);
}
