#include <stdio.h>

int main()
{
	int a, b;
	int t;
	scanf("%d %d", &a, &b);
//	利用辗转相乘法计算最大公约数 
	while ( b != 0) {
		t = a % b;
		a = b;
		b = t;
	} 
	
	printf("最大公约数为: %d", a);
	
	return 0;
}
