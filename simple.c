#include <stdio.h>
float calculate_simple_interest(float principle,float time,float rate){
  return (principle*rate*time)/100;}
int main(){

float principle,time,rate,simple_interest;
  printf("enter principle amount: ");
  scanf("%f", &principle);

  printf("enter time(years): ");
  scanf("%f", &time);
  printf("enter rate of interest: ");

  scanf("%f", &rate);

  simple_interest= calculate_simple_interest(principle,time,rate);

  printf("simple interest is: %.2f\n", simple_interest);

  return 0;
}
