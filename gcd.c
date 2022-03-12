#include <stdio.h>

int main (){

    int a , b, x, gcd ;

    printf("write the value of a ");
    scanf("%d", &a);
    printf("write the value of b ");
    scanf("%d", &b);
    if(a > b ){
        x =b ;
    } else {
        x = a ;


    }

    for (int i =x ; i >=0 ; i--) {
        if(a%i ==0 && b%i ==0) {
            gcd = i ;
            break ;
        }
    }

    printf("%d gcd is ", gcd) ;

    return 0 ;




}
