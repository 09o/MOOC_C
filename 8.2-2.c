#include <stdio.h>

int isPrime(int x, int knowPrimes[], int numberOfKnowPrimes);

int main(void)
{
//	const int number = 100;
//	int prime[number] = {2};
	int prime[100] = {2};  // 初始化数组{2,0,0,...,0 (99*0)}，即排除了2是素数的筛选 
	int count = 1;  // 因为数组中0存在一个2，所以数组从1开始 
	int i = 3;  // 同理，数的筛选从3开始，因为2已存在于数组中 
	while ( count < 100 ) { 
		if ( isPrime(i, prime, count) ) {  // ifPrime函数为True时会逐步向prime数组中在每个索引添加一个值
			prime[count++] = i;  // 这个回合中 index=count 下一回合进行到这里index=++count
		}
		i ++;  // 数值随循环增加，满足if条件后，返回++count，直至count<100，即count进行了101次增加，count101=101 退出while条件函数 
	}
	for ( i=0; i<100; i++ ) {
		printf("%d", prime[i]);
		if ( (i+1)%5 ) {  // 每行每个数后加一个制表符，第五个不加 
			printf("\t");
		} else {  // 每行第五个数后加一个换行 
			printf("\n");
		}
	}
	
	return 0;
}

int isPrime(int x, int knowPrimes[], int numberOfKnowPrimes)
{
	int ret = 1;  // 定义一个值为1 (true) 
	int i;
	for ( i=0; i<numberOfKnowPrimes; i++ ) {  // nOP=count，这里for循环中的条件会判断所有小于x值的素数被x取模是否为0 
		if ( x % knowPrimes[i] == 0 ) {  // 我们判断一个数是否为素数，只用判断小于x的所有素数是否能被整除就行了。
			ret = 0;  // 详细参见：https://program-think.blogspot.com/2011/12/prime-algorithm-1.html -境界5的描述 
			break;
		}
	}
	return ret;  // 上面循环判断出是否为素数，不是会返回0，因为ret初始值为1，所以最终我们会返回True 
}
