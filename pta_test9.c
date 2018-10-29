/*
求a的连续和
输入两个整数a和n，a的范围是[0,9]，n的范围是[1,8]，求数列之和
S=a+aa+aaa+...+aaa...a(n个a)。如a为2、n为8输入的是
2+22+222+...+22222222的和；

E.g.: input 2 4 -> 2468
 
*/
#include <stdio.h>

int main()
{
	int a, n;
	scanf("%d %d", &a, &n);
	
	int sum = 0;
	int i;
	int t = 0;
	for ( i=0; i<n; i++ ) {
		t = t * 10 + a;
		sum += t;
	}
	printf("%d\n", sum);
	return 0;
}
