#include <stdio.h.>

int main()
{
	double currency;
	int amount;
	
	printf("�����빺������տ����(Ԫ)��");
	scanf("%lf %d", &currency, &amount);
	
	double change = amount - currency;
		
	if (currency > amount) {
		printf("��������ܶ�Ϊ%0.2fԪ����֧����Ǯ������", currency);
	} else {
		printf("лл�ݹˣ������������%0.2fԪ", change);
	}
	
	
	return 0;
}
