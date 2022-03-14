#include <stdio.h>

// global vars

int w =10 ;




void changeW () {

    w = 20 ;




}

double sum_two_numbers(double num1,double num2) {

    double sum = num1+ num2 ;

    return sum ;
}


int amazingFun (int a) {

    int b = a ;

    a = 2  * b ;

    return a*b ;



}


void main (){

    int x =10 , y = 20 , z = 30 ;

    z = amazingFun(x);
    printf("%d is x , %d is y , %d is z \n ", x, y, z);


    printf("%d w before changeW done  \n ", w);

    changeW() ;

    printf("%d w after changeW done \n ", w);

    localFun();




   // double res = sum_two_numbers(12.5, .4) ;

   // printf("%fl response number is ", res);

}
