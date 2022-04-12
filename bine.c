#include<stdio.h>


void int_bin (int n ){

    char bin [100];

    int i =0 ;
    while (n>0) {
        bin[i]= n% 2 ;
        n = n/2 ;

        i++ ;
    }

    for (int i=100 ; i>=0 ; i--){

        if(bin[i] =='1' || bin[i] == '0') {
            printf("%c", bin[i]);
        }

    }



}



void main (){

    int_bin(50);








}
