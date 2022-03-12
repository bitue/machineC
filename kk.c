#include <stdio.h>

int main (){


   
   double a , b ,sum ;
   char sign ;
   // get the sign from  the line
   scanf("%c", &sign);

   printf("enter the first number ");
   // get the first number
   scanf("%lf", &a);
   printf("enter the second number");
   //get the second number
   scanf("%lf", &b);
   // conditional
   if(sign =='+'){
    sum = a + b ;
   }
   else {
    sum = a -b ;
   }
   // print the sum value
   printf("%lf %c %lf = %lf\n", a, sign, b, sum); 


   int a ;
   printf("enter the number ");
   scanf("%d", &a) ;
   if(a% 2 == 1) {
    printf("the number %d is odd", a);
   }
   else {
    printf("the number is even %d", a);
   }

   return 0 ;





}
