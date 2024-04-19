#include<stdio.h>
main()
{
	int integer;
	printf("Enter a even or odd: ");
	scanf("%d",&integer);
	if(integer<=10){
		printf("Even",integer);
	}else if(integer<=30){
		printf("Odd",integer);
	}
}