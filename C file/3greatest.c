#include<stdio.h>
int main(){
int value1_262, value2_262, value3_262;
printf("enter three distnict numbers to know which is the largest\n");
scanf("%d %d %d", &value1_262, &value2_262, &value3_262);
if (value1_262 > value2_262){
if (value2_262 > value3_262)
printf("%d is the largest number among", value1_262);
else if (value2_262 > value3_262)
printf("%d is the largest number among\n", value2_262);}
else 
printf("%d is the largest number among\n", value3_262);
}
