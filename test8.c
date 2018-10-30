#include <stdio.h>

void swap(int a, int b);

int main()
{
	int a = 5;
	int b = 6;
	
	swap(5, 6);
	
	printf("a=%d b=%d", a, b);  // => a=5 b=6; 注意：该程序并没有交换a&b的值。
								// C语言在调用函数时候，永远只能传值给函数 
	
	return 0;
}

void swap(int a, int b)
{
	int t = a;
	a = b;
	b = t;
}
