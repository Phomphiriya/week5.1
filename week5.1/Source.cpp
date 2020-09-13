#include<stdio.h>
int main()
{
	int num,x,y;
	printf("Enter your num :");
	scanf_s("%d", &num);
	for(y=0;y<num;y++)
	{
		for (x = 0; x < num; x++)
		{
			if ((x==y&&x>0)||x==1||(y==num-1&&x>0))
				printf("*");
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}