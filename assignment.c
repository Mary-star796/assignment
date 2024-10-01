//program to find simple interest
/*
program to find simple interest
author:mary
reg no:CT101/G/23804/24
date:26/09/2024
*/
#include<stdio.h>
int main(){
float principle,rate,time,interest;
printf("enter principle");
scanf("%f,&principle");
printf("enter rate");
scanf("%f,&rate");
printf("enter time in years");
scanf("%f,&time");
printf("interest is 0.2%f",interest);
interest=(principle*time*rate)/100;
return 0;
}

