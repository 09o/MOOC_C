#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number;
	int* a;
	int i;
	printf("Enter the number: ");
	scanf("%d", &number);
	a = (int*)malloc(number*sizeof(int));
	// the result of malloc() return void(str)
	for (i=0;i<number;i++) {
		scanf("%d", &a[i]);
	}
	// reverse these numbers
	for (i=number-1; i>=0; i--) {
		printf("%d ", a[i]);
	}
	// malloc��������֮����Ҫ��free���� 
	free(a);
	return 0;
}
