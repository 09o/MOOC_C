#include <stdio.h> 

//const double PI = 3.14159;
#define PI 3.14159
#define FORMAT "%f\n"
#define PI2 2*PI
#define PRT printf("%f ", 2*PI*3.0); \
			printf("%f\n", PI2*3.0)

int main(int argc, char const *argv[])
{
//	printf("%f\n", 2*PI*3.0);
	printf(FORMAT, 2*PI*3.0);
	printf(FORMAT, PI2*3.0);
	PRT;
	return 0;
}
