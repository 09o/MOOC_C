#include <stdio.h>

/*编写一个将输入复制到输出的程序*/
/*并将其中连续的多个空格一个空格代替*/


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
