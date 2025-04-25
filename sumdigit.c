#include<stdio.h>
int main()
{
	int n,sum=0,digit;
	printf("enter n: ");
	scanf("%d",&n);
	
	if(n<0){
		n=-n;
	}
	for(;n!=0;n/=10){
		digit=n%10;
		sum+=digit;
	}
	
	printf("sum of digit:%d\n",sum);
}