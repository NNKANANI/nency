#include<stdio.h>
int main()
{
	int n;
	
	printf("enter array size:");
	scanf("%d",&n);
	
	int arr[n],evensum=0,oddsum=0;
	

	for(int i=0;i<n;i++)
	{
		printf("enter arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		if(arr[i] % 2 == 0){
		evensum+=arr[i];
	}else if(arr[i]%2!=0){
		oddsum+=arr[i];
	}
}
	
	
	printf("total even element sum is%d",evensum);
	printf("total odd element sum is%d",oddsum);
}
