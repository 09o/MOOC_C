#include <stdio.h>

void cheer(int i)
{
	printf("cheer %d\n", i);
}

int main()
{
	cheer(2.5); // => cheer 2    -->  输入了一个float参数，结果依旧返回的是一个int参数 
	cheer(3);
	
	return 0;
}
