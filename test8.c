#include <stdio.h>

void swap(int a, int b);

int main()
{
	int a = 5;
	int b = 6;
	
	swap(5, 6);
	
	printf("a=%d b=%d", a, b);  // => a=5 b=6; ע�⣺�ó���û�н���a&b��ֵ��
								// C�����ڵ��ú���ʱ����Զֻ�ܴ�ֵ������ 
	
	return 0;
}

void swap(int a, int b)
{
	int t = a;
	a = b;
	b = t;
}
