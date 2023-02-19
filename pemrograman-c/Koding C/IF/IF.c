#include <stdio.h>

main()
{
	double total_pembelian, discount = 0;
	/*discount diinisialisasikan dengan nilai 0 */
	printf("total pembelian = Rp ");
	scanf("%if", &total_pembelian);
	
	if (total_pembelian >= 100.000)
		discount = 0.05 * total_pembelian;
	printf("Besarnya discount = Rp %.21f\n", discount);
}
