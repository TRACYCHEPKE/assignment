/*
program to calculte simple interest
author:TRACY CHEPKEMOI
REG NO:CT101/G/24016/24
*/
#include <stdio.h>
int main()
{
	float principle,rate,time,interest;
	//prompt the user to enter principle
	printf("enter principle:");
	scanf("%f", &principle);
	
	//prompt the user to enter rate
	printf("enter rate:");
	scanf("%f", &rate);
	
	//pront the user to enter time
	printf("enter time:");
	scanf("%f", &time);
	
	//calculate interest
		interest=principle*rate/100*time;
		printf("interest is:%f",interest);
	
	return 0;
}