#include <stdio.h>

int main (){


   int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
   int ara2[10];
   int i , j ;
   for( i =0 , j =9 ; i<10  ; j-- , i++) {
       //our temp array 2 te amra ulta array boshaise ;
        ara2[j]=ara[i];

   }


   for(int i=0 ; i<10 ; i++ ) {
    // ulta kore felaise .............
    ara[i] = ara2[i];
   }
     for(int i =0 ; i<10 ; i ++) {
      printf("%d tomo upadan is %d ...........ara \n", i+1 , ara[i]) ;
   }





    return 0 ;


}
