
#include<stdio.h>


void main (){

    int namta[10][10] ;

    for(int i =1 ; i<= 10 ;i++){
        for(int j =1 ; j<=10 ; j++) {
            namta[i-1][j-1] = i*j ;
        }
    }

    for(int i =0 ; i< 10 ; i++){
        for(int j =0 ; j< 10 ; j++){
            printf("ghor : %d * %d  man : %d \n", j+1, i+1 , namta[i][j]);

        }
    }

    /*
    int marks [4][2];

    for(int i=0 ; i< 2 ; i++){
        for(int j=0 ; j<4 ; j++){
            scanf("%d", &marks[j][i]) ;
        }
    }
    /*
    /*
    int marks[4][10] = {{80, 70, 92, 78, 58, 83, 85, 66, 99, 81}, {75, 67, 55, 100, 91, 84, 79, 61, 90, 97}, {98, 67, 75, 89, 81, 83, 80, 90, 88, 77}, {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    for(int i=0 ; i< 10 ; i++){
        marks[3][i]= marks[0][i]*0.25 + marks[1][i]*0.25 + marks[2][i]*0.5 ;
    }
    for(int i =0 ; i< 10 ; i++ ){
        printf("roll : %d ... mark is : %d  \n", i+1 , marks[3][i]) ;

    }

    */


}
