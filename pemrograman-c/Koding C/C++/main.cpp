//petama kali latihan belajar C++  12-08-2016
//R
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	cout <<"rifaldi";
	cout <<"noviansyah \n";
	cout <<"TEKNIK INFORMATIKA \n";
	cout <<"==========================================================\n";
	cout <<"memori dari tipe data char	:" <<sizeof(char);
	cout <<"\n\n";
	cout <<"memori dari tipe data unsigned 	:" <<sizeof(unsigned char);
	cout <<"\n\n";
	cout <<"memori dari tipe dara signed 	:" <<sizeof(signed char);
	cout <<"\n\n";
	cout <<"memori dari tipe data float 	:" <<sizeof(float);
	cout <<"\n\n";
	cout <<"memori dari tipe data double	:" <<sizeof(double);
	cout <<"\n\n";
	cout <<"memori dari tipe data long doble : " <<sizeof(long double);
	cout <<endl;
	cout <<"==========================================================\n";
	char A1;
	int  A2;
	A1 = 'A';
	A2 = int(A1);
	cout <<"nilai variabel A1 adalah \n" << A1;
	cout <<"nilai variabel A2 dalam bentuk angak (ASCII) = "<< A2;
	cout <<endl;
    cout <<"========================================================== \n";
    int x=5000,
    	y=300000;
    unsigned int z=60000;
    cout <<"nilai x yang telah diberika adalah " <<x<< "dan y adalah" <<y ;
    cout <<endl;
    cout <<"nilai z yang telah di berikan adalah " <<z;
    cout <<endl; 
	system ("pause");
	return EXIT_SUCCESS;
}
