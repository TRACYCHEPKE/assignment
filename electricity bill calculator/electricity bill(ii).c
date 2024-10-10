//use if else to check and apply neccesary calculation
/*
author:tracy chepkemoi
admmision:CT101/G/24016/24
*/
#include<stdio.h>
int main(){
int customerID;
char customername;
int unitconsumed;

printf("enter customerID:");
scanf("%d", &customerID);

printf("enter customername:");
scanf("%s", &customername);

printf("enter unitconsumed:");
scanf("%d", &unitconsumed);

if("unitconsumed<=199"){
printf("chargesperunit=1.20");
}
else if("unitconsumed>=200&&unitconsumed<=400"){
printf("chargesperunit=1.50");
}
else if("unitconsumed>=400&&<600"){
printf("chargesperunit=1.80");}
else{
printf("chargesperunit=2.00");}

return 0;
}


