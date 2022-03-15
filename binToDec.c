#include<stdio.h>
#include<string.h>
#include<math.h>


void dec_to_bin (int n ){

    char bin[32] ;

    for (int i =0 ; n >0 ; i++) {
        bin[i] = n%2 ;
        n = n /2 ;
    }

    for(int i =0 ; i <32 ; i++){
        printf("%d", bin[i]);
    }


}

void main (){

    char bin []= "1001001";
    int dec =0 ;
    int pos = strlen(bin) -1 ;

    for(int i=0 ; i< strlen(bin) ; i++){
       if(bin[i]=='1') {
          dec = dec + pow(2, pos) ;

       }
         pos--;

    }

    printf("%d", dec);

    dec_to_bin(50);






}
