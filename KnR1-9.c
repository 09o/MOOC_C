#include <stdio.h>

/*��дһ�������븴�Ƶ�����ĳ���*/
/*�������������Ķ���ո�һ���ո����*/


#define FIRST 1
#define NOFIRST 0
 
int main()
{
	int c, status;
	status = FIRST;
	while ((c=getchar()) != EOF) {
		if (c == ' ') {
			if (status == FIRST) {
				putchar(c);
				status = NOFIRST;
			}
		} else {
			putchar(c);
			status = FIRST;
		}
	}
	
	return 0;

}
