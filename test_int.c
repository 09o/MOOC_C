#include <stdio.h>

int main()
{
	unsigned int a=0; 
	int b=0;
	while (++a>0)
		;
	printf("unsigned int数据类型最大数是:%u\n", a-1);
	
	
	while ((a=a/10)!=0) {
		b++;
	}
	printf("int数据类型最大的数的数位是:%d", b);
	return 0;
}
