#include<stdio.h>
int main()
{
	int arr[3][3];
	
	for(int i =0;i<3;i++)
	{
		for(int j=0;j<3;j++){
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i=0;i<3;i++){
		int rowsum = 0;
		for(int j=0;j<3;j++){
			rowsum = rowsum + arr[i][j];
		}
			printf("\n sum of the row %d = %d\n", i,rowsum);
		
	}
	for(int i=0;i<3;i++){
		int colsum = 0;
		for(int j=0;j<3;j++){
			colsum = colsum + arr[j][i];
		}
			printf("\n sum of the col %d = %d\n", i,colsum);
		
	}
}
/*OUTPUT
arr[0][0] = 2
arr[0][1] = 7
arr[0][2] = 1
arr[1][0] = 3
arr[1][1] = 5
arr[1][2] = 4
arr[2][0] = 8
arr[2][1] = 9
arr[2][2] = 6

 sum of the row 0 = 10

 sum of the row 1 = 12

 sum of the row 2 = 23

 sum of the col 0 = 13

 sum of the col 1 = 21

 sum of the col 2 = 11
*/