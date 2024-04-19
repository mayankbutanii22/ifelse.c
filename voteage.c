#include<stdio.h>
main()
{
	int vote_age;
	printf("Enter a age of the candidate: ");
	scanf("%d",&vote_age);
	if (vote_age==18){
	printf("You are eligible to vote: %d",vote_age);	
	}else if(vote_age!=18){
	printf("You are not eligible to vote: %d",vote_age);	
	}
}