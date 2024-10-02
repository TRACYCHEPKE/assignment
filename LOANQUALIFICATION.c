//implement a program for loan qualification
/*
Author:Tracy chepkemoi
Reg no:CT101/G/24016/24
*/
#include<stdio.h>
int main()
{
int age;
float annual_income;

printf("enter your age:");
scanf("%d",&age);

printf("enter annual income:");
scanf("%f",&annual_income);

if(age>=21&&annual_income>=21000){
printf("congratulations you qualified for the loan");
}
else
{
printf("unfortunately,we are unable to offer you a loan at this time");
}
return 0;
}
