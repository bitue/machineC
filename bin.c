#include<stdio.h>






int main (){

    //make it sortable array


    // binary search it

    int arr[] = {12, 54, 120, 230, 900, 1000, 4000};
    int high_index = 6 ;
    int min_index =0 ;
    int searchNum =90;

    int mid_index ;


    while (min_index <= high_index) {


        mid_index = (high_index + min_index) /2 ;
        if(arr[mid_index] == searchNum ) {
            return mid_index;
        }
        if (arr[mid_index]> searchNum){
            high_index = mid_index -1 ;
        }
        if (arr[mid_index] < searchNum ) {
            min_index = mid_index + 1 ;
        }




    }

    return -1 ;










}
