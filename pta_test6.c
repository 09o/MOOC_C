/*
����Ҫ���д���򣬼�������2/1+3/2+5/3+8/5+...��ǰn��֮�͡�
ע������дӵ�2����ÿһ��ķ�����ǰһ��������ĸ�ĺͣ�
��ĸ��ǰһ��ķ��ӡ�

input��������һ���и���һ��������N

E.g.�� 20 --> 32.66
 
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
