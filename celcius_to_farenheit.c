#include<stdio.h>
int main() {

 float celcius,fahrenheit;

 printf("Enter celcius temparature : ");
 scanf("%f",&celcius);

 fahrenheit = (9*celcius)/5 - 32;

 printf("The fahrenheit temparature is ==> %f", fahrenheit);

return 0;
}
