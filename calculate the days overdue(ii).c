//to calculate the days overdue
/*
AUTHOR:TRACY CHEPKEMOI
REGNO:CT101/G/24016/24
*/
#include<stdio.h>
int main(){
int Due_Date;
int Book_ID;
int Return_Date;
int Days_overdue;

printf("enter Due_Date(in format of YYYYMMDD):");
scanf("%d",&Due_Date);

printf("enter Book_ID:");
scanf("%d",&Book_ID);

printf("Return_Date(in format of YYYYMMDD):");
scanf("%d",&Return_Date);

Days_overdue=Return_Date-Due_Date;
printf("days overdue is:%d\n",Days_overdue);

return 0;
}

