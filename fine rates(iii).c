//determine fine rates as per specified rates
/*
author:TRACY CHEPKEMOI
REGNO:CT101/G/24016/24
*/
#include<stdio.h>
int main(){

    int book_ID;
    int due_Date;
    int Return_Date;
    int Days_overdue;
    int Fine_rate;
    int Fine_amount;

    printf("enter book_Id:");
    scanf("%d",&book_ID);

    printf("enter due_Date(in format YYYYMMDD):");
    scanf("%d",&due_Date);

    printf("enter Return_Date(in format YYYYMMDD):");
    scanf("%d",&Return_Date);

    Days_overdue=Return_Date-due_Date;
    printf("days overdue is:%d\n",Days_overdue);

    if(Days_overdue<=7){
        printf("ksh 20 is your charges:%d\n days",Days_overdue);
     } else if (Days_overdue>=8&&Days_overdue<=14){
    printf("ksh 50 is your charges:%d\n days",Days_overdue);
       } else{
    printf("ksh100 is your charges:%d\n days",Days_overdue);
       }
       Fine_amount=Fine_rate*Days_overdue;

       printf("The fine is:ksh %d\n",Fine_amount);

 return 0;
       }


