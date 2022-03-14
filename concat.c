#include <stdio.h>

int getCharLength (char name[]) {
    int length =0 ;

    for(int i=0 ; name[i]!='\0' ; i++){
        length++ ;

    }
    return length ;
}


void main (){

    char first_name[] = "MD Ashikul";

    char last_name[] =" Islam";
    char full_name[17];
    // get the value of length of first_name ;
    int flen = getCharLength(first_name);
    int llen = getCharLength(last_name) ;

    for(int i =0 ; i< flen ; i++){
        full_name[i]= first_name[i];

    }
    for(int j = 10 , k=0 ; j < flen+llen ; j++ , k++) {
        full_name[j] = last_name[k];

    }

    printf("%s", full_name);

}
