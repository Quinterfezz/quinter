/*
A program to calculator simple intrest and compound intrest.
NAME:MILLICENT WANJA MUNGAI
REG NO:CT102/G/25120/24
*/

#include <stdio.h>
int main(){
    float principal,rate,time,interest;
    
    printf("Enter the principal: ");
    scanf("%f",&principal);

    printf("Enter the rate : ");
    scanf("%f",&rate);

    printf("Enter the time in months: ");
    scanf("%f",&time);

    //formula
    interest = (principal*rate*time)/100;

    printf("Simple Interest = Ksh. %.2f", interest);





    return 0;

}