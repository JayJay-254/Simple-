/*
program to print simple interest
Author:Jckson Njenga
Registration Number:CT102/G/21788/23
  */

#include<stdio.h>
int main()
{
float principal, rate, time, simple_interest;

printf("\nEnter the principal amount:");
scanf("%f",& principal);

printf("Enter the rate of interest:");
scanf("%f",&rate);

printf("Enter the time period:");
scanf("%f",&time);

simple_interest = (principal * time * rate)/100.0;

printf("\nsimple_interest = %.2f\n", simple_interest);

return 0;
}
