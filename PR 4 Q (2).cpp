#include<stdio.h>
int main()
{
	int i,j,number=11;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",number);
			number++;
		}
		printf("\n");
	}
}
/*output:
11
1213
141516
17181920


*/