#include <stdio.h> 

#define cube(x) ((x)*(x)*(x))

int main(int argc, char const *argv[])
{
	int i;
	scanf("%d", &i);
//	printf("%d\n", ((5)*(5)*(5)));
	printf("%d\n", cube(i));
	return 0;
}
