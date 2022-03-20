/* This code takes an input of value for second and converts it to equivalent hour, minute and second */
#include<stdio.h>
int main(){
long sec1_262, sec2_262, hr_262, min_262, t_262;
printf("Enter the time in second:\n");
scanf("%ld", &sec1_262);
hr_262 = sec1_262 / 3600 ;
t_262 = sec1_262 % 3600 ;
min_262 = t_262 / 60;
sec2_262 = t_262 % 60;
printf("\n\n %ld second = %ld Hour %ld Minute and %ld Second\n", sec1_262, hr_262, min_262, sec2_262);
return 0;
}
