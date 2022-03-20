/* THis code runs to take an input of value in celsius and converts it into degree fahrenheit.
21053262, Abtsega Tesfaye */
#include<stdio.h>
int main(){
double cel_262, fah_262;
printf("enter the temperature in celsius\n");
scanf("%lf", &cel_262);
fah_262 = (cel_262 * 9 / 5) + 32 ;
printf("%lf degree celsius is %lf degree fahrenheit\n", cel_262, fah_262);
return 0;
}

