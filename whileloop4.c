#include<stdio.h>
int main()
{
	int n;
	
	printf("value of n:");
	scanf("%d",&n);
	
	while(n<=1){
		printf("%d\n",n);
		n+=2;
	}
}