#include <stdio.h>

int main()
{
	int x = 70000;
	int t = x;
	int mask = 1;
	while (t > 9) {
		t /= 10;
		mask *= 10;
	}
//	int mask = pow(10, cnt-1);
	do {
		int d = x / mask;
		printf("%d", d);
		if (mask > 9) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
//		printf("x=%d,mask=%d,d=%d\n", x, mask, d);
	} while (mask>0);
	
//	x = 14567
//	mask = 10000
//	d=14567/10000  ->1
//	x=14567%10000  ->4567
//	mask=10000/10     ->1000
//	d=4567/1000   ->4
//	x=4567%1000   ->567
//	mask=1000/10     ->100
//	d=567/100  ->5
//	x=567%100  ->67
//	mask=100/10   ->10
//	d=67/10  ->6
//	x=67%10  ->7
//	mask=10/10  ->1
//	d=7/1  ->7
//	x=7%1  ->0
//	mask=1/10 ->0
	
	
	printf("\n");
	
	return 0;
}
