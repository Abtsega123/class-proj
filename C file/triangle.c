/* This program runs to calculate the area of a triangle after taking inputs from the user
21053262, Abtsega Tesfaye */
#include<stdio.h>
int main(){
double base_262, height_262, area_262;
printf("enter the value of base of the triange\n");
scanf("%lf", &base_262);
printf("enter the value of height of the triangle\n");
scanf("%lf", &height_262);
area_262 = 0.5 * base_262 * height_262;
printf("The area of a triangle is %f\n", area_262);
return 0;  
}
