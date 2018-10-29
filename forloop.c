#include <stdio.h>

int main()
{
	int x;
	
	scanf("%d", &x);
	int fact = 1;
	
	int i = x;
//	for (i=1; i<=x; i++) {
//		fact *= i;
//	}

//	for (i=2; i<=x; i++) {
//		fact *= i;
//	}
	
	for ( x=x; x>1; x-- ) {
		fact *= x;
	}
	
	printf("%d!=%d\n", i, fact);
}
