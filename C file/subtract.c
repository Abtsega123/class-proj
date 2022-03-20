/* IN this code, the program takes two numbers of input and outputs their difference. NB: it substracts  the smaller number from the greatest and outputs posetive value only.
21053262, Abtsega Tesfaye */
#include<stdio.h>
int main(){
int val1_262, val2_262, diff1_262, diff2_262;
printf("enter two numberst to substract a number from another number and display the result\n");
scanf("%d%d", &val1_262, &val2_262);
diff1_262 = val1_262 - val2_262;
diff2_262 = val2_262 - val1_262;
if (val1_262 > val2_262)
printf("%d is the difference of %d and %d\n", diff1_262, val1_262, val2_262);
else 
printf("%d is the difference of %d and %d\n", diff2_262, val2_262, val1_262);
return 0;
}

