#include<stdio.h>

int main()
{
    int A,B;
	printf("Enter the  Percentage of subject A & B : ");
	scanf("%d%d",&A,&B);
	
	if(A >= 55 && B >= 45)
		printf("\nResult is pass");
	else if(A<55 && A>45 && B>=55)
	    printf("\nResult is pass");
	else if(B<45 && A>=65)
		printf("\nYou are eligible to re-attend the exam for sub B");
    else 
        printf("\nfailed");
	
	return 0;
}
