#include<stdio.h>
int main()
{
	int a;
	
	printf("enter any number:");
	scanf("%d",&a);
	
	if((a%5)==0)
	{
		printf("enter number is divisible by 5:");
	}
	else
	{
		printf("enter number is not divisible by 5:");
	}
}