#include <stdio.h>
#include<math.h>
int main(){
    float principle,rate,n,time;
    printf("enter principle amount:");
    scanf("%f", &principle);

    printf("enter rate:");
    scanf("%f",&rate);

    printf("enter n:");
    scanf("%f",&n);

     printf("enter time:");
    scanf("%f",&time);
        float compound_interest = principle *pow((1+(rate/(100*n))),n*time)-principle;


    printf("compound interest is: %.2f\n ", compound_interest);

    return 0;

}
