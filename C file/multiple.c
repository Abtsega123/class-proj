#include <stdio.h>

int main(void){
int choice, a, b, c;

printf("\n\tPress 1 for addition\n\tPress 2 for subtraction\n\tPress 3 for multiplication\n\tPress 4 for dision\n");
scanf("%d", &choice);

switch(choice){

case 1:
printf("enter two numbers:\n");
scanf("%d%d", &a, &b);
c=a+b;

printf("%d is the sum\n", c);
break;

case 2:
printf("enter two numbers:\n");
scanf("%d%d", &a, &b);
c=a-b;

printf("%d is the differece\n", c);
break;

case 3:
printf("enter two numbers:\n");
scanf("%d%d", &a, &b);
c=a*b;

printf("%d is the product\n", c);
break;

case 4:
printf("enter two numbers:\n");
scanf("%d%d", &a, &b);
c=a/b;

printf("%d is the Quotient\n", c);
break;

default:
printf("the number choice you entered is not between 1 and 4. please, try again\n");
}

return 0;
}
