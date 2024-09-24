//variables and data types
//preprocessor directives
#include <stdio.h>
int main(){
    //declaration and initialization
    char a='H';//%c
    char name[]=("TRACY");//%s
    int age=17;//%d
    float salary=2000.59;//%f
    double budget=1000;//%lf

    printf("the character is: %c \n ",a);
    printf("your name is:%s \n",name);
    printf("the salary budget is %.2f \n",salary);
    printf("the salary budget%.2lf \n",budget);
    return 0;
}
