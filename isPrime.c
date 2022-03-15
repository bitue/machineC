#include<stdio.h>
#include<math.h>

void main (){

    int n = 40 ;
    int root = sqrt(n);
    int dummyArray[n] ;
    int formArray[n] ;

    for(int i=2 ; i< n ; i++){
        formArray[i]=1 ;
        printf("%d", 1) ;
    }
    printf("\n");
    for(int i=2 ; i <n ; i++){
        dummyArray[i]=i ;
        printf("%d", i) ;


    }
    for(int i=2 ; i<=root ; i++){
        int j =2;
        while(i*j <n){
            formArray[i*j]=0 ;
            j++;


        }
    }

    // print the form array ...
    for(int i =0 ; i< n ; i++){
        printf("%d \n", formArray[i]);
    }









}
