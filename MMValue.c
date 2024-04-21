#include<stdio.h>
main()
{
	int small;
	printf("Enter the value: ");
	scanf("%d",&small);
	if(small==8){
		printf("The Maximum Value: %d",small);
	}else if(small==3){
		printf("The minimum Value: %d",small);
	}
}