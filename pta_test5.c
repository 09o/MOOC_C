/*
��������Ϸ����ϵͳ�������һ��100���ڵ���������
�û�����һ����������в²⡣
����Ҫ��ϵͳͳ�ƲµĴ��������1�β³�������
��ʾ��Bingo����������������ڲ��и���������ʾ��Lucky You������
����������ε�����N��>3�������ڣ�������N�Σ��µ�������
����ʾ��Good Guess�������������N�ζ�û�в��У�
����ʾ��Game Over��������������������ڵ���N��֮ǰ��
�û�����һ��������Ҳ�����Game Over!"������������ 
*/

// �����ҵĴ��� 
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

