#include <stdio.h>

void cheer(int i)
{
	printf("cheer %d\n", i);
}

int main()
{
	cheer(2.5); // => cheer 2    -->  ������һ��float������������ɷ��ص���һ��int���� 
	cheer(3);
	
	return 0;
}
