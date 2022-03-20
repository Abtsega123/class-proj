#include<stdio.h>
int main()
{
int v1_262, v2_262;
printf("enter two numbers to swap\n");
scanf("%d%d", &v1_262, &v2_262);
printf("before swapping takes place, the numbers are: %d & %d\n", v1_262, v2_262);
v1_262 = v1_262 + v2_262;
v2_262 = v1_262 - v2_262;
v1_262 = v1_262 - v2_262;
printf("after swapping takes place, the values are: %d & %d\n", v1_262, v2_262);
return 0;
}
