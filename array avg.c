#include<stdio.h>
int main()
{
	int arr[5] = {12,42,18,26,50};
	float sum=0,avg;
	
	for(int i=0;i<5;i++)
	{
		sum+= arr[i];
	}
	avg = sum/5;
	printf("the avg of given number:%.2f",avg);
}