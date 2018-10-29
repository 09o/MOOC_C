/* 统计给定整数M和N区间内的素数个数以及对他们进行求和
   输入格式：（1<=M<=N<=500)
   输入样式：10 31
   输出样式： 7 143 
*/
#include <stdio.h> 

int main()
{
	int m,n;
	int i;
	int cnt = 0;
	int sum = 0;
	
	scanf("%d %d", &m, &n);
	if (m==1) {
		m = 2;
	}
	for ( i=m; i<=n; i++ ) {
		int isPrime = 1;
		int k;
		for (k=2;k<i-1;k++) {
			if (i%k == 0) {
				isPrime = 0;
				break;
			}
		}
		// i is prime
		if (isPrime) {
			cnt ++;
			sum += i;
		}

	}
		printf("%d %d", cnt, sum);
	return 0;
}
