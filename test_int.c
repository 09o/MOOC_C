#include <stdio.h>

int main()
{
	unsigned int a=0; 
	int b=0;
	while (++a>0)
		;
	printf("unsigned int���������������:%u\n", a-1);
	
	
	while ((a=a/10)!=0) {
		b++;
	}
	printf("int������������������λ��:%d", b);
	return 0;
}
