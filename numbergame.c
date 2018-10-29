#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	printf("我已经想好了一个1到100之间的数。");
	do {
		printf("试试猜到这个1到100之间数：");
		scanf("%d", &a);
		count++;
		
		if (a < number) {
			printf("小了，请再次");
		} else if (a > number) {
			printf("大了，请再次");
		} else {
			printf("恭喜你，在第%d次猜中了这个数字！", count);
		}
		
	} while (a != number);
	
	return 0;
	
}
