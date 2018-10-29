#include <stdio.h.>

int main()
{
	double currency;
	int amount;
	
	printf("请输入购买金额和收款面额(元)：");
	scanf("%lf %d", &currency, &amount);
	
	double change = amount - currency;
		
	if (currency > amount) {
		printf("您购买的总额为%0.2f元，所支付的钱不够！", currency);
	} else {
		printf("谢谢惠顾！这是你的找零%0.2f元", change);
	}
	
	
	return 0;
}
