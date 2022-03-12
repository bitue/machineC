#include<stdio.h>
int main (){


    int arr[]={1, 2, 3} ;
    int temp ;
    int j ;
    int i ;



    for( i=0 , j=2 ; i<2 ; i++ , j--){
        temp = arr[j];
        arr[j] = arr[i];
        arr[i]= temp ;



    }
    int k ;

    for (k=0 ; k<3 ; k++){
        printf("%d \n", arr[k]);
    }





    return 0 ;


}
