#include<stdio.h>
int main()
{
	int n = 0;
	int sum = 0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int p = 1;
		for (int j = 1; j <= i; j++)
		{
			p = p * j;
		}
		sum = sum + p;
	}
	printf("答案是：%d", sum);
	return 0;
}