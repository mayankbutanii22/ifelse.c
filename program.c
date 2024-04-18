#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	 
	if (num<=-9) 
	printf("This number is negative: ");
	else if(num>=0)
	printf("This number is neutral: ");
	else if(num>7)
	printf("This number is positive: ");
	
}