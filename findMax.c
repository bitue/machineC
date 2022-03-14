#include <stdio.h>



int find_max (int arr[], int n) {

    int max_num = arr[0];


    for(int i =1 ; i< n ; i++){

        if(arr[i] > max_num) {
            max_num = arr[i];
        }



    }

    return max_num ;


}

int find_min (int arr[], int n) {

    int min_num = arr[0];

    for(int i =1 ; i < n ; i++) {


        if (arr[i]< min_num) {
            min_num = arr[i];
        }
    }

    return min_num ;



}

int avarageFunc (int arr[], int n){

    int sum =0 ;

    for (int i=0 ; i< n ; i++ ){

        sum = sum + arr[i];
    }

    double  avarage = sum / n ;


    return avarage ;


}


// call by value and call by refs


void callRefs (int arr[], int n) {

   arr[0] =n ;



}




void main (){

    int n =7 ;

    int arr[] = {1,56, 6, 34, 22, 12, 90} ;

    int max = find_max(arr , n);

    printf("%d is the max num of the array \n", max) ;

    int min = find_min(arr, n);
    printf("%d is the min num here \n");

    // avarage func ...

    double avarage = avarageFunc(arr, n) ;

    printf("%0.2lf is the avarage of the all numbers ...\n",avarage);

    printf("%d ....before func \n", arr[0]);
    callRefs(arr, 700);
    printf("%d ....after func \n", arr[0]);





}
