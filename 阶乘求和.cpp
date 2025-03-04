#include<stdio.h>
int main()
{
	int sum = 0;
	int n = 0;
	scanf_s("%d", &n);
	int p = 1;
	for (int i = 1; i <= n; i++)
	{
		p = p * i;
		sum = sum + p;
	}
	printf("答案是：%d", sum);
	return 0;
}