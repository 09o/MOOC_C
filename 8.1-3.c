#include <stdio.h> 

int main()
{
	const int number = 10;
	int x;
	int count[number];
	int i;
	
	for ( i=0; i<number; i++ ) {
		count[i] = 0;
	}
	// 这个初始化值得循环等同于下面代码 
	// int count[number] = {0};  
	scanf("%d", &x);
	while ( x!=-1 ) {
		if ( x>=0 && x<=9 ) {
			count[x] ++;	
		}
		scanf("%d", &x);
	}
	for ( i=0; i<number; i++ ) {
		printf("%d:%d\n", i, count[i]);
	}
	return 0;
}
