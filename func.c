#include <stdio.h>

int main()
{
	int n;
	int i;
	double sum = 0.0;
//	int sign = 1; // 计算 f(n)=1/1-1/2+1/3-1/4+...-1/n 的结果 
	double sign = 1.0;
	
	scanf("%d", &n);
	for ( i=1; i<=n; i++ ) {
		sum += sign/i;	// 计算 f(n)=1/1+1/2+1/3+...+1/n 的结果 
		sign = -sign;
	}
	
	printf("f(%d)=%f\n", n, sum);	
	
	return 0;
}
