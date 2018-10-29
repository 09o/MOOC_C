/*
约分最简分式

E.g.: input 60/120 -- > 1/2 
*/
#include <stdio.h>

int main()
{
	int dividend, divisor;
	scanf("%d/%d", &dividend, &divisor);
	
	int a = dividend;
	int b = divisor;
	int t;
//	printf("%d %d", dividend, divisor); 
	while ( b != 0 ) {
		t = a % b;
		a = b;
		b = t;
	}
//	printf("%d %d %d", a, dividend, divisor);
	printf("%d/%d", dividend/a, divisor/a);
	return 0;
}
