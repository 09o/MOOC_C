/*
猜数字游戏是令系统随机产生一个100以内的正整数，
用户输入一个数对其进行猜测。
程序还要求系统统计猜的次数，如果1次猜出次数，
提示“Bingo！”；如果三次以内猜中该数，则提示“Lucky You！”；
如果超过三次但是在N（>3）次以内（包括第N次）猜到该数，
则提示“Good Guess！”；如果超过N次都没有猜中，
则提示“Game Over！”，并结束程序。如果在到达N次之前，
用户输入一个负数，也输出“Game Over!"，并结束程序。 
*/

// 这是我的代码 
#include <stdio.h>

int main()
{
	int number, n;
	scanf("%d %d", &number, &n);
	int inp = 0;
	int cnt = 0;	
	do {
		scanf("%d", &inp);
		cnt ++;
		if (inp == number) {
			if (cnt == 1) {
				printf("Bingo!\n");
			} else if (cnt <= 3) {
				printf("Lucky You!\n");
			} else if (cnt <= n) {
				printf("Good Guess!\n");
			}
		}
		if (cnt > n) {
			printf("Game Over!");
			break;
		}
		if ( inp < 0 ) {
			break;
		}		
		if ( inp > number ) {
			printf("Too big!\n");
		} else if (inp < number ){
			printf("Too small!\n");			
		}
	} while ( inp != number );	
	return 0;
}

