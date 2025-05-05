#include<stdio.h>
int main()
{
	int i, arr[5];
	
	for(i=0;i<5;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&arr[i]);
	}

	for(i=0;i<5;i++)
	{
		if(arr[i] < 0) {
			printf("nagetive numbers: %d",arr[i]);
		}
	}
	printf("\n");
	
}
/*OUTPUT
a[0] = 8
a[1] = -4
a[2] = -2
a[3] = 5
a[4] = 6
nagetive numbers: -4 nagetive numbers: -2
*/