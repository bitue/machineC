

#include <stdio.h>
#include<math.h>
#include<string.h>



void main (){

    char input [1000];
    char output [1000];
    int start =0 ;

    gets(input);

    for(int i=0 , j=0 ; i<1000 ; i++){
        if(input[i]==' '){
            start =0 ;
            if(input[i+1] != ' '){
                output[i] ='W';
            }
        }
        else {
            start=1 ;

        }
        if(start==1 ) {

            output[j] = input[i] ;
            j++;

        }


    }

    printf("%s -----------input ", input);
    printf("%s -----------output", output);





}
