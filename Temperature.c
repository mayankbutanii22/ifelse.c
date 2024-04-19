#include<stdio.h>
main()
{
	int temperature;
	printf("Enter a temperature: ");
	scanf("%d",&temperature);
	if(temperature<=10){
		printf("cold",temperature);
	}else if(temperature<=25){
		printf("Moderate",temperature);
	}else {
		printf("Hot",temperature);
	}
}