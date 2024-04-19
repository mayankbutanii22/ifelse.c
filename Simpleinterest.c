#include<stdio.h>
main()
{
	int p,r,t,si;
	printf("Enter a principle amount,rate,time: ");
	scanf("%d%d%d",&p,&r,&t);
	if(si==0){
	   si=(p*r*t)/100;
	   printf("positive number",si);
	}else{
		si=(p*r*t)/100;
		printf("negative number",si);
	}
}