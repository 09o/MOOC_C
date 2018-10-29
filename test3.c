#include <stdio.h>

int main()
{
	int x;
	int ret;
	
	scanf("%d", &x);
	while (x > 1) {
		x /= 2;
		ret++;
	}
	printf("%d", ret);
	
	return 0;
}
