/* This code aimed to know the smallest number between the given two inputs of numbers
21053263, Abtsega Tesfaye */
#include<stdio.h>
int main(){
int num1_262, num2_262;
printf("enter two numbers to know which is the smallest\n");
scanf("%d%d", &num1_262, &num2_262);
if (num1_262 > num2_262)
printf("%d is the smallest\n", num2_262);
else 
printf("%d is the smallest\n", num1_262);
return 0;
}
