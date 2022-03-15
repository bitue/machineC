

#include<stdio.h>

void row_sum (int arr[5][5]) {

        for(int row=0 ; row<5 ; row++){
        int sum =0 ;
        for(int col =0 ; col<5 ; col++){
            sum = sum + arr[row][col];

        }

        printf("No row : %d :  the sum is %d \n" , row+1 , sum);

    }



}

void col_sum (int arr[5][5]) {
     for(int col=0 ; col< 5 ; col ++){
        int sum =0 ;
        for(int row =0 ; row < 5 ; row ++){
            sum = sum + arr[row][col];
        }

        printf("No col : %d :  the sum is %d \n" , col+1 , sum);
    }



}

void main (){

    int puzzle [5][5]= { {6, 4, 7, 8, 9}, {3, 7, 1, 9, 9}, {8, 6, 4, 2, 7}, {2, 4, 2, 5, 9}, {4, 1, 6, 7, 3} } ;

    row_sum(puzzle);


    printf("\n \n \n");

    col_sum(puzzle);

/*
    for(int col=0 ; col< 5 ; col ++){
        int sum =0 ;
        for(int row =0 ; row < 5 ; row ++){
            sum = sum + puzzle[row][col];
        }

        printf("No col : %d :  the sum is %d \n" , col+1 , sum);
    }

    */





}
