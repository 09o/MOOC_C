/*
求水仙花n的数量，若n是个三位数， 其满足条件：153=1^3+5^3+3^3 
*/
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	// 遍历100-999
	int first = 1;
	int i = 1;
	while ( i<n ) {
		first *= 10;
		i ++;
	}
	i = first;
	while (i<first*10) {
		int t = i;
		int sum = 0;
		do {
			int d = t%10;
			t /= 10;
			int p = 1;
			int j = 0;
			while ( j<n ) {
				p *= d;
				j ++;
			}
			sum += p;
		} while ( t>0 );
		if ( sum== i ) {
			printf("%d\n", i);
		}
		i ++;
	}	
	return 0;
}
