/*
本题要求编写程序，计算序列2/1+3/2+5/3+8/5+...的前n项之和。
注意该序列从第2项起，每一项的分子是前一项分子与分母的和，
分母是前一项的分子。

input：输入在一行中给出一个正整数N

E.g.： 20 --> 32.66
 
*/

#include <stdio.h>

int main()
{
	int n;
	double dividend, divisor;
	double sum = 0.0;
	int i;
	double j;
	
	scanf("%d", &n);
	
	dividend = 2;
	divisor = 1;
	
	for (i=0; i<n; i++) {
		sum += dividend / divisor;
		j = dividend;
		dividend +=	divisor;
		divisor = j;
	}
	printf("sum=%0.2f", sum); 
	return 0;
}
