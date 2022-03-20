#include<stdio.h>
int main(){
char xa;
printf("enter an alphabet\n");
scanf("%c", &xa);
if (xa>='a' && xa<='z') {
xa=xa-32;
printf("the uppercase of the entered alphabet is %c", xa);
}
else
printf("the entered alphabet is not a lower case alphabet\n");
return 0;
}
