#include <stdio.h>

int main()
{
	int n;
	int i;
	double sum = 0.0;
//	int sign = 1; // ���� f(n)=1/1-1/2+1/3-1/4+...-1/n �Ľ�� 
	double sign = 1.0;
	
	scanf("%d", &n);
	for ( i=1; i<=n; i++ ) {
		sum += sign/i;	// ���� f(n)=1/1+1/2+1/3+...+1/n �Ľ�� 
		sign = -sign;
	}
	
	printf("f(%d)=%f\n", n, sum);	
	
	return 0;
}
