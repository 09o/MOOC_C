#include <stdio.h>

int isPrime(int x, int knowPrimes[], int numberOfKnowPrimes);

int main(void)
{
//	const int number = 100;
//	int prime[number] = {2};
	int prime[100] = {2};  // ��ʼ������{2,0,0,...,0 (99*0)}�����ų���2��������ɸѡ 
	int count = 1;  // ��Ϊ������0����һ��2�����������1��ʼ 
	int i = 3;  // ͬ������ɸѡ��3��ʼ����Ϊ2�Ѵ����������� 
	while ( count < 100 ) { 
		if ( isPrime(i, prime, count) ) {  // ifPrime����ΪTrueʱ������prime��������ÿ���������һ��ֵ
			prime[count++] = i;  // ����غ��� index=count ��һ�غϽ��е�����index=++count
		}
		i ++;  // ��ֵ��ѭ�����ӣ�����if�����󣬷���++count��ֱ��count<100����count������101�����ӣ�count101=101 �˳�while�������� 
	}
	for ( i=0; i<100; i++ ) {
		printf("%d", prime[i]);
		if ( (i+1)%5 ) {  // ÿ��ÿ�������һ���Ʊ������������� 
			printf("\t");
		} else {  // ÿ�е���������һ������ 
			printf("\n");
		}
	}
	
	return 0;
}

int isPrime(int x, int knowPrimes[], int numberOfKnowPrimes)
{
	int ret = 1;  // ����һ��ֵΪ1 (true) 
	int i;
	for ( i=0; i<numberOfKnowPrimes; i++ ) {  // nOP=count������forѭ���е��������ж�����С��xֵ��������xȡģ�Ƿ�Ϊ0 
		if ( x % knowPrimes[i] == 0 ) {  // �����ж�һ�����Ƿ�Ϊ������ֻ���ж�С��x�����������Ƿ��ܱ����������ˡ�
			ret = 0;  // ��ϸ�μ���https://program-think.blogspot.com/2011/12/prime-algorithm-1.html -����5������ 
			break;
		}
	}
	return ret;  // ����ѭ���жϳ��Ƿ�Ϊ���������ǻ᷵��0����Ϊret��ʼֵΪ1�������������ǻ᷵��True 
}
