#include <stdio.h>
//带参数的宏 
#define RADTODEG1(x) ((x) * 57.29758)
#define RADTODEG2(x) (x * 57.29758)
#define RADTODEG3(x) (x) * 57.29758

int main(int argc, char const *argv[])
{
	printf("%f ", ((5+2) * 57.29758));
	printf("%f\n", RADTODEG1(5+2));
	printf("%f ", (5+2 * 57.29758));
	printf("%f\n", RADTODEG2(5+2));
	printf("%f ", 180/(1)*57.29758);
	printf("%f\n", 180/RADTODEG3(1));
	return 0;
}
