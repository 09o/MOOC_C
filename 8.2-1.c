#include <stdio.h>

int search(int key, int a[], int length);
int main(void)
{	
	int a[] = {2,4,6,8,1,3,5,7,9,10,13,15,12,11,22};  // 数组的集成初始化 
	int x;
	int loc;
	printf("请输入一个数字：");
	scanf("%d", &x);
	loc = search(x, a, sizeof(a)/sizeof(a[0]));
	if ( loc != -1 ) {
		printf("%d在第%d个位置上\n", x, loc);
	} else {
		printf("%d不存在\n", x);
	}
	
	return 0;
}

int search(int key, int a[], int length)
{
	int ret = -1;
	int i;
	for ( i=0; key<length; i++ ) {
		if ( a[i] == key ) {
			ret = i;
			break;
		}
	}
	return ret;
}
