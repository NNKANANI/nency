#include<stdio.h>
int main()
{
	int arr[] = {3,7,1,8,6};
	int length = sizeof(arr)/sizeof(arr[0]);
	
	printf("length of an array:%d\n",length);
}