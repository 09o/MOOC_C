#include <stdio.h>

int main()
{
	int hour1, minute1;
	int hour2, minute2;
	
	printf("Type in the start time: ");
	scanf("%d %d", &hour1, &minute1);
	
	printf("Type in the end time: ");
	scanf("%d %d", &hour2, &minute2);
	
	int difference;
	difference = (hour2 * 60 + minute2) - (hour1 * 60 + minute1);
	int hour3 = difference / 60;
	int minute3 = difference % 60;
	printf("The difference of the two times is: %d–° ±-%d∑÷", hour3, minute3);
	
	return 0;
}
