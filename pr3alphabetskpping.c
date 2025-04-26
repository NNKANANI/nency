#include<stdio.h>
int main()
{
	char i;
	
	i='A';
	
	do{
		printf(" %c",i);
		i+=4;
	}
	while(i<='Z');
}


//output
//A E I M 