#include <stdio.h>

int getCharLength (char name[]) {
    int length =0 ;

    for(int i=0 ; name[i]!='\0' ; i++){
        length++ ;

    }
    return length ;
}


void main (){

    char name[3] ;
    int length ;



   if(1 == scanf("%s   ", name)) {
        length = getCharLength(name);

    }

    printf("%d", length );


}
