#include<stdio.h>
int main()
{
	int score;
	char grade;
	
	printf("enter your score:");
	scanf("%d",&score);
	
	grade= (score>=90)?'A':
				(score>=75&&score<=90)?'B':
		 	 	(score>=60&&score<=75)?'C':
		 	 	(score>=35&&score<=60)?'D':
		 	 	(score>=35)?'F':
	printf("your grade is: %c\n",grade);
		 	 		
	printf("comment:");
	switch(grade){
		case 'A':
			printf("Excellent work !!\n");
			break;
		case 'B': 
			printf("Well done.\n");
			break;
		case 'C':
			printf("Good job.\n");
			break;
		case 'D':
			printf("you passed,but you can do batter.\n");
			break;
		case 'F':
			printf("sorry,you failed.\n");
			break;
			default:
				printf("invalid grade.\n");
		
	}
	if (score>= 60 && score <=100){
		printf(" congratulations! you are eligible for the next level.\n");
	}else{
		printf("please try again next time.\n");
	}	 	 		
}
