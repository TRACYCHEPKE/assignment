/*
program to calculate compound interest
author:TRACY CHEOKEMOI
Reg NO:CT101/G/24016/24
*/
#include<stdio.h>
#include <math.h>
int main()
{
	float principle,time,rate,n;
	//prompt the user to enter principle
	printf("enter the priinciple:");
	scanf("%f",&principle);
	//prompt the user to enter time
	printf("enter the time:");
	scanf("%f",&time);
	//prompt the user to enter the rate
	printf("enter the rate:");
	scanf("%f",&rate);
	//prompt the user to enter n
	printf("enter the value of n:");
	scanf("%f",&n);
	//calculate compound_interest
	float compound_interest=principle*pow((1+(rate/(100*n))),n*time)-principle;
	printf("the compound_interest is:%.2f\n",compound_interest);
	return 0;
}
