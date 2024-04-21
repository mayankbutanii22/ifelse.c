#include<stdio.h>
main()
{
	int a;
	printf("Enter a Negative,Neutral and Positive value: ");
	scanf("%d",&a);
	if(a<=-1){
		printf("This Number is Negative",a);
	}else if(a==0){
		printf("This Number is Neutral",a);
	}else if(a>=1){
		printf("This Number is Positive",a);
	}
}