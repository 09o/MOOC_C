#include <stdio.h>

int main()
{
	double a, b;
	printf("Comoute the average, please enter two number: ");
	scanf("%lf %lf", &a, &b);
	
	double c = (a + b) / 2;
	
	printf("The average is: %f", c);
	
	return 0;
}
