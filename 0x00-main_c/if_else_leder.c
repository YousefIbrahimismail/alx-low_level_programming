#include<stdio.h>
int main(void)
{
	int marks=0;
	printf("Enter your Total mark during the project\n");
	scanf("%d", &marks);
	if( marks <= 100 && marks > 79){
	printf("Your score is A\n");
	}
	else if ( marks > 60 && marks <= 80){
	printf("Your score is B\n");
	}
	else if (marks >= 40 && marks > 30){
	printf("Your score is C\n");
	}
	else { printf("Check your input and try again\n");
	}
	return (0);
}
