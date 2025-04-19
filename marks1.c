#include<stdio.h>
int main()
{
	int bio,phy,chem,total;
	float per;
	
	printf("enter the value bio: ");
	scanf("%d",&bio);
	
	printf("enter the value phy: ");
	scanf("%d",&phy);
	
	printf("enter the value chem: ");
	scanf("%d",&chem);
	
	total=phy+chem+bio;
	printf("%d",total);
	
	per=(total*100)/300;
	printf("%d",per);	
	
}