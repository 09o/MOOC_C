#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	printf("���Ѿ������һ��1��100֮�������");
	do {
		printf("���Բµ����1��100֮������");
		scanf("%d", &a);
		count++;
		
		if (a < number) {
			printf("С�ˣ����ٴ�");
		} else if (a > number) {
			printf("���ˣ����ٴ�");
		} else {
			printf("��ϲ�㣬�ڵ�%d�β�����������֣�", count);
		}
		
	} while (a != number);
	
	return 0;
	
}
