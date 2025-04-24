#include<stdio.h>
int main()
{
	int n,i=1;
	printf("value of n:");
	scanf("%d\n",&n);
	
	
	do{
		printf("%d",i);
		i+=2;
	}while(i<=10);
}