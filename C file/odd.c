#include<stdio.h>
int main(){
int numb1_262, numb2_262;
printf("enter two numbers to compare and know which is greater and odd or even");
scanf("%d%d", &numb1_262, &numb2_262);
if (numb1_262 > numb2_262){
if (numb1_262 % 2 == 0)
printf("%d is greater and even", numb1_262);
else 
printf("%d is greater and odd", numb1_262);
}
if (numb1_262 < numb2_262){
if (numb2_262 % 2 == 0)
printf("%d is greater and even", numb2_262);
else 
printf("%d is greater and odd", numb2_262);
}
return 0;
}
