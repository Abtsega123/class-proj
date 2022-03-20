#include<stdio.h>
#include<math.h>
int main(void)
{
float a,b,c,dis,r1,r2,real,img;
printf("enter the values of a ,b and c ");

scanf("%f %f %f",&a,&b,&c);
dis = (b*b) -4 * a * c;
if (dis > 0)
{
r1=(-b + dis)/ (2 * a);
r2=(-b - dis)/ (2 * a);
printf("the roots are %f and %f ",r1,r2);
}
else if (dis == 0)
{
r1=r2=( -b / (2 * a));
printf("the root is %f",r1);
}
else 
{
dis = - dis;
real = (-b / (2 * a));
img= sqrt (dis)/(2 * a);
printf("the roots are r1=%f+i%f and r2=%f-i%f",real,img,real,img);
}
return 0;

}
