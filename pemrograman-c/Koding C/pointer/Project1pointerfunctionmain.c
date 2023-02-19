#include<stdio.h>
#include<stdlib.h>
char *KAPITAL(char *Y)
{
char z;
char *X;
while(*Y)
{
	i = i + sizeof(char);
Y = Y + sizeof(char);
}
Y = Y - i*sizeof(char);
X = (char *)malloc(i + sizeof(char));
while(*Y)
{
z = *Y;
if(z>'a' && z<'z')
*X = z;
Y = Y + sizeof(char);
X = X + sizeof(char);
}
*X = *Y;
return X = X - i*sizeof(char);
}
int main()
{
char *p="huruf kecil";
char *h;
h = KAPITAL(p);
printf("%s\n",h);
free(h);
return 0;
}

