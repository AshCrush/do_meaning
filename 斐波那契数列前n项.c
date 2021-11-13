#include<stdio.h>
int main(void)
{
	
	long long int m1, m2, m3;
	int i,n;
	L:
	printf("请输入要计算的项数：");
	scanf_s("%d", &n);
	m1 = m2 = 1;
	if (n <= 0)
		goto L;
	if (n == 1)
		printf("%lld", m1);
	else
	{
		printf("%lld,%lld,", m1, m2);
		for (i = 3; i <= n; i++)
		{
			m3 = m1 + m2;
			printf("%lld，", m3);

			m1 = m2;
			m2 = m3;
		}
	}
}