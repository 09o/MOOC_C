/* 
念数字
输入一个整数，输出每个数字对应的拼音。
当整数为负数时，先输出"fu"字，十个数字对应的拼音如下：
0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu

E.g.：input 1234 -> yi er san si
	  input -600 -> fu liu ling ling

*/
#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	
	if ( x<0 ) {
		printf("fu ");
		x = -x;
	}
	
	int t = x;
	int mask = 1;
	while (t > 9) {
		t /= 10;
		mask *= 10;
	}	
	do {
		int d = x / mask;
		switch (d) {
			case 0: printf("ling"); break;
			case 1: printf("yi"); break;
			case 2: printf("er"); break;
			case 3: printf("san"); break;
			case 4: printf("si"); break;
			case 5: printf("wu"); break;
			case 6: printf("liu"); break;
			case 7: printf("qi"); break;
			case 8: printf("ba"); break;
			case 9: printf("jiu"); break;
		}
		if (mask > 9) {
			printf(" ");
		}
		x %= mask;
		mask /= 10;
	} while (mask>0);
	printf("\n");
	return 0;
}
