/* THis code is written to manipulate swapping task after taking two numbers to swap by using the third variable, swapper.
21053262, Abtsega Tesfaye */
#include<stdio.h>
int main()
{
int a_262, b_262, swapper_262;
printf("enter two numbers to swap\n");
scanf("%d%d", &a_262, &b_262);
printf("The number before swapping are %d and %d\n ", a_262, b_262);
swapper_262 = a_262;
a_262 = b_262;
b_262 = swapper_262;
printf("After swapping, the swapped values are: %d & %d\n", a_262, b_262);
return 0;
}

