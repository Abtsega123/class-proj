#include<stdio.h>
int main(){
int y_262;
printf("Enter the year:");
scanf("%d", &y_262);
if((y_262%4==0 && y_262%100!=0) || (y_262%400 == 0))
{
printf("the year %d is a leap year", y_262);
}
else
printf("the entered year is not a leap year");
return 0;
}
