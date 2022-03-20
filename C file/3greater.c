#include<stdio.h>
int main()
{
int value1_262, value2_262, value3_262;
printf("enter three numbers to know which is the largest\n");
scanf("%d%d%d", &value1_262, &value2_262, &value3_262);
if (value1_262 > value2_262){
if (value1_262 > value3_262)
printf("%d is the largest number\n", value1_262);}
if (value2_262 > value1_262){
if (value2_262 > value3_262)
printf("%d is the largest number\n", value2_262);}
else{ 
printf("%d is the largest number\n", value3_262);
}
return 0;
}

