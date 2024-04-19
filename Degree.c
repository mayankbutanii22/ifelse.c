#include<stdio.h>
main()
{
	int angle;
	printf("Enter a degree: ");
	scanf("%d",&angle);
	if(angle>0 && angle<=90){
	printf("First quadrant",angle);	
	}else if(angle>90 & angle<=180){
	printf("Second quadrant",angle);	
	}else if(angle>180 && angle<=270){
	printf("Third quadrant",angle);	
	}else if(angle>270 && angle<=360){
	printf("Fourth quadrant",angle);	
	}
}