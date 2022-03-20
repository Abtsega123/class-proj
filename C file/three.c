#include<stdio.h>
#include<math.h>
void main(){
int s1_262, s2_262, s3_262, s_262, area_262;
printf("enter the values of the three sides of the triangle\n");
scanf("%d %d %d", &s1_262, &s2_262, &s3_262);
s_262 = (s1_262 + s2_262 + s3_262) / 2;
area_262 = sqrt (s_262 * (s_262 - s1_262) * (s_262 - s2_262) * (s_262 - s3_262));
printf("The area of a triangle is %d\n", area_262);
return 0;
}
