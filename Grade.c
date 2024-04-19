#include<stdio.h>
main()
{
	int mark;
	printf("Enter a student of the marks: ");
	scanf("%d",&mark);
	if(mark>=90){
	printf("a",mark);
	}else if(mark>80 && mark<89){
	printf("b",mark);
    }else if(mark>70 && mark<79){
    printf("c",mark);	
	}else if(mark>60 && mark<69){
	printf("d",mark);	
	}else if(mark<=60){
	printf("f",mark);	
	} 
}