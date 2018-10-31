/*
该程序的算法：
构造素数表
·欲构造n以内（不含）的素数表
1. 开辟prime[n]，初始化其所有元素为1，prime[x]为1表示x是素数
2. 令x=2
3. 如果x是素数，则对于（i=2;x*i<n;i++)令prime[i*x]=0
4. 令x++，如果x<n，重复3，否则结束 
*/ 
#include <stdio.h>

int main()
{
	const int maxNumber = 10;  // 求27以内的素数 
	int isPrime[maxNumber];  // 定义数组isPrime[] 
	int i;
	int x;
	for ( i=0; i<maxNumber; i++ ) {
		isPrime[i] = 1;  // 初始化数值所有元素为1 
	}
	// for test
	printf("\t");
	for ( i=2; i<maxNumber; i++ ) {
		printf("%d\t", i);
	}
	printf("\n");
	// for test
	for ( x=2; x<maxNumber; x++ ) {
		if ( isPrime[x] ) {  // 如果2是素数，那么2的倍数都会被标记为0，即4,6,8,10.... 
			for ( i=2; i*x<maxNumber; i++ ) {
				isPrime[i*x] = 0;
			} 
		}
		// for test
		printf("%d\t", x);
		for ( i=2; i<maxNumber; i++ ) {
			printf("%d\t", isPrime[i]);
		}
		printf("\n");
		// for test 
	}
	for ( i=2; i<maxNumber; i++ ) {
		if ( isPrime[i] ) {
			printf("%d\t", i);
		}
	}
	printf("\n");
	
	return 0;
}
