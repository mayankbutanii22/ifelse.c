#include<stdio.h>
main()
{
	float amount,discount,paid;
	printf("Enter the amount to be paid: ");
	scanf("%f",&amount);
	if(amount<100){
		printf("is the amount paid: %.2f",amount);
	}else if(amount>100 && amount<=500){
		discount=(amount*5)/100;
		paid=amount-discount;
		printf("After applying the discount, you final amount: %.2f",paid);
	}else if(amount>500 && amount<=1000){
		discount=(amount*10)/100;
		paid=amount-discount;
		printf("After applying the discount, you final amount: %.2f",paid);
	}else if (amount>1000){
		discount=(amount*15)/100;
		paid=amount-discount;
		printf("After applying the discount, you final amount: %.2f",paid);
	}
}