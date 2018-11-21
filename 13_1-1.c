#include <stdio.h>

/*
----%[flags][width][.prec][hIL]type----
#####Flag##### ##########含义########## 
*     -		 *	        左对齐        *
*	  +		 *      在前面放+或-      *
*  (space)   *         正数留空	      * 
*	  0  	 *	        0填充	      *
####################################### 
#width或 prec# ##########含义########## 
*   number   *        最小字符数      *
*	  *		 *    下一参数式字符数    *
*  .number   *       小数点后位数     * 
*	  .*  	 *下一参数式小数点后的位数*
####################################### 
*/

int main(int argc, char const *argv[])
{
	printf("%9d\n", 123);
	printf("%-9d\n", 123);
	
	printf("%+9d\n", 123);
	printf("%+-9d\n", 123);
	printf("%-+9d\n", 123);
	
	printf("%09d\n", 123);
	printf("%-9d\n", 123);
	
	printf("%9.2f\n", 123.0);
	printf("%*d\n", 6, 123);
	
	printf("%hhd\n", (char)12345);
	
//	int num;
//	printf("%d%n\n", 12345, &num);
//	printf("%d\n", num);
	
	return 0;
}
