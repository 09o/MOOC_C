#include <stdio.h>
int main()
{
	int type;
	
	scanf("%d", &type);
	
	switch (type) {
		case 1:
			printf("hello");
			break;
		case 2:
			printf("Good Morning");
			break;
		case 3:
			printf("Good Afternoon");
			break;
		case 4:
			printf("Good Evening");
			break;
		case 5:
			printf("Good Night");
			break;
		default:
			printf("Good bye");
			break;
	}
	
	return 0;
}
