#include<stdio.h>
main()
{
    int year; 
    printf("Enter a year: ");  
    scanf("%d", &year); 
    if(((year%4==0) && ((year%400==0) || (year%100!=0))))   
    {  
        printf("is a leap year: %d",&year);  
    } else{  
        printf("is not a leap year: %d",&year);  
    }  
}