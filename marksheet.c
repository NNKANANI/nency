#include<stdio.h>
int main()
{
	int marks;
	
	printf("enter the marks obtained: ");
	scanf("%d",&marks);
	
	if(marks >75)
	{
		printf("grade A\n");
	}
	else if (marks>60 && marks<=75)
	{
		printf("grade b\n");
	}
	else if(marks>45 && marks<=60)
	{
		printf("grade c\n");
	}
	else if(marks>35 && marks<=45)
	{
		printf("grade d\n");
	}
	else
	{
		printf("fail\n");
	}

}