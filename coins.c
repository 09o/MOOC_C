#include <stdio.h>

int main()
{
	int x;
	int one, two, five;
//	int exit = 0;
	
	scanf("%d", &x);
	for ( one=1; one<x*10; one++) {
		for ( two=1; two<x*10/2; two++) {
			for ( five=1; five<x*10/5; five++) {
				if ( one + two*2 + five*5 == x*10) {
					printf("可以用%d个1角加上%d个两角再加上%d个五角来得到%d元\n", 
						one, two, five, x);
						goto out;	// 跳到out所指的地方，只建议在嵌套循环中使用，从最内层跳到最外层 
//						exit = 1;
//						break;
				}
			}
//			if  (exit == 1) {
//				break;
//			}
		}
//		if (exit == 1) {
//			break;
//		}
	}
	
out:	
	return 0;
}
