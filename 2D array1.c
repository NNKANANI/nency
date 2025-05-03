#include<stdio.h>
int main()
{
	int arr[3][3];
	float avg,sum=0;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++){
			printf("enter arr[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
			sum+= arr[i][j];
		}
	}
	avg=sum/9;
	printf("the avg of given number:%.2f",avg);
	
}