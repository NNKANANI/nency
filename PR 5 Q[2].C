#include<stdio.h>
int main()
{
	int i,j, arr[3][3];
	
	for(i =0;i<3;i++)
	{
		for(j=0;j<3;j++){
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	int largest = arr[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
				if(arr[i][j] > largest){
					largest = arr[i][j];
				}
			}
		}
		
		printf("the largest element in the array is: %d\n",largest);
		
	
}
/*output
arr[0][0] = 1
arr[0][1] = 2
arr[0][2] = 3
arr[1][0] = 4
arr[1][1] = 5
arr[1][2] = 6
arr[2][0] = 7
arr[2][1] = 8
arr[2][2] = 9
the largest element in the array is: 9
*/
