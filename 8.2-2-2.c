/*
�ó�����㷨��
����������
��������n���ڣ���������������
1. ����prime[n]����ʼ��������Ԫ��Ϊ1��prime[x]Ϊ1��ʾx������
2. ��x=2
3. ���x������������ڣ�i=2;x*i<n;i++)��prime[i*x]=0
4. ��x++�����x<n���ظ�3��������� 
*/ 
#include <stdio.h>

int main()
{
	const int maxNumber = 10;  // ��27���ڵ����� 
	int isPrime[maxNumber];  // ��������isPrime[] 
	int i;
	int x;
	for ( i=0; i<maxNumber; i++ ) {
		isPrime[i] = 1;  // ��ʼ����ֵ����Ԫ��Ϊ1 
	}
	// for test
	printf("\t");
	for ( i=2; i<maxNumber; i++ ) {
		printf("%d\t", i);
	}
	printf("\n");
	// for test
	for ( x=2; x<maxNumber; x++ ) {
		if ( isPrime[x] ) {  // ���2����������ô2�ı������ᱻ���Ϊ0����4,6,8,10.... 
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
