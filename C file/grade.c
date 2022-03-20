#include<stdio.h>
int main(){
int ab_262, ts_262;
printf("enter the total marks of a student\n");
scanf("%d", &ts_262);
ab_262 = ts_262 / 10;
switch(ab_262)
{ 
case 9: printf("your grade is marked O");
break;
case 8: printf("your grade is marked E");
break;
case 7: printf("your grade is marked A");
break;
case 6: printf("your grade is marked B");
break;
case 5: printf("your grade is marked C");
break;
default : printf("failed");
}
return 0;
}
