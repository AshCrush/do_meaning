#include<stdio.h>
int k = 0;
int j_1[3] = { 0, 0,1 };
int j_2[3] = { 0, 1,0 };
int a = 0;
int b = 0;
int i = 0;
int j = 0;
int way(int x, int y,int arr[9][9], int jurdge_1, int jurdge_2)
{
	
	for (k = 0; k < 3; k++)
	{
		jurdge_1 = jurdge_1 + j_1[k];
		jurdge_2 = jurdge_2 + j_2[k];
		 arr[jurdge_1][jurdge_2] = arr[jurdge_1][jurdge_2];
		if (jurdge_1 <= x && jurdge_2 <= y && arr[jurdge_1][jurdge_2] == 1)
		{
			way(x, y,arr, jurdge_1, jurdge_2);
			return 1;
		}
		else
		{

			return 0;
		}

	}
	/*for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		
		printf("%d\n",arr[i][j]);
	}*/

}
int main()
{ 
	
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	int arr[9][9] = {0};
	
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
		printf("\n");
	}
	int q = way(a, b,arr,i,j);
	if (q = 1)
		printf("YES\n");
	else if (q = 0)
		printf("NO\n");
	return 0;
}