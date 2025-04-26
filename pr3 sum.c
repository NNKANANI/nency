#include<stdio.h>
int main()
{
	int number,firstdigit,lastdigit,sum;
	
	printf("enter a number: ");
	scanf("%d",&number);
	
	lastdigit = number % 10;
	
	while(number>=10){
		number /= 10;
	}
	firstdigit = number;
	
	sum = firstdigit + lastdigit;
	
	printf("firstdigit: %d\n",firstdigit);
	printf("lastdigit: %d\n",lastdigit);
	printf("the sum of the first and last digits is : %d\n",sum);
}