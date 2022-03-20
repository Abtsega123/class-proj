/* this program takes an input of numbers in degreee fahrenheit and gives an output of the converted value in degree celsius(converst degree fahrenheit in to degree celsius)
21053262, Abtsega Tesfaye */
#include<stdio.h>
int main(){
double cel_262, fah_262;
printf("enter the temperature in fahrenheit to convert into degree celsius \n");
scanf("%lf", &fah_262);
cel_262 = (fah_262 - 32) * 5 / 9 ;
printf("%lf degree fahrenheit is %lf degree celsius\n", fah_262, cel_262);
return 0;
}

