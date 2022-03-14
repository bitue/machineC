#include <stdio.h>
#include <math.h>



int is_prime (int n) {

    if (n<2) {
        return -1 ;
    }
    if (n==2) {
        return -1 ;

    }
    else {
        for (int i=2 ; i<n ; i++){
            if(n%i ==0) {
                return -1;
            }
        }
        return 1 ;
    }






}


int is_prime_eff (int n ) {

    int root = sqrt(n) ;

     if (n<2) {
        return -1 ;
    }
    if (n==2) {
        return -1 ;

    }
    else {
        for (int i=2 ; i<root ; i++){
            if(n%i ==0) {
                return -1;
            }
        }
        return 1 ;
    }
}

// -----------------------------------new func will be written here  tomorrow INSHAALLAH  ----------------------------------------------------------------//

void main (){

    int res = is_prime(19);

    if(res == -1) {
        printf("Is not prime ");
    }
    else {
        printf("is prime !!!" );
    }

}
