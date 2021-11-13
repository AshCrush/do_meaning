//计算各项值主要用到排列组合C（n,m）PS：指从n个不同元素中抽出m个元素进行组合
#include<stdio.h>
int main()
{
    int  n;
	int p, q,a,b,c,r,i,d;
	int t = 1;
	printf("请输入需要计算的层数：");
	scanf_s("%d",&n,5);
	for (i = 1; i <= n; i++)//控制层数
	{
		for (p = 1; p <= n - i; p++) {
			printf(" ");
		}//控制空格数
		if (i - 1 == 0)
			printf("1");//输入第一层数字
		else {
			for (d = 0; d < i; d++)//控制每层项数
			{
				if (d == 0) {
					printf("1\x20");
				}//杨辉三角每一行第一个数字恒为1
				else {
					t = d;
					r = d;//后续步骤会改变d值，此处保留d值
					if (t == 1);//如果m=1,则在该代码中需单独拿出使用
					else
						for (; d - 1 > 0; d--)
							t = t * (d - 1);//计算m!
					d = r;//恢复d值
					q = i - 1;
					a = q;
					for (b = 1; b < d && q - 1 > 0; b++)//控制n阶乘项数
					{
						a = a * (q - 1);
						q--;
					}//计算n阶乘结果
					c = a / t;//计算该项值
					printf("%d\x20", c);
				}
			}
		}
		printf("\n");//换行
	}
	return 0;
}