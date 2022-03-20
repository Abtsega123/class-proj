/* THis code gives an output of the converted value of paisa in to equivalent paisa and rupee value
212053262, Abtsega Tesfaye */
#include<stdio.h>
int main(){
int pia_262, rem_262, quo_262;
printf("Enter the piasa value: = ");
scanf("%d", &pia_262);
quo_262 = pia_262 / 100;
rem_262 = pia_262 % 100;
printf("%d piasa is equals to %d rupees and %d paisa\n", pia_262, quo_262, rem_262);
return 0;
}
