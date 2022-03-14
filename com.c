

#include <stdio.h>

int getCharLength (char name[]) {
    int length =0 ;

    for(int i=0 ; name[i]!='\0' ; i++){
        length++ ;

    }
    return length ;
}


 int string_compare(char a[], char b[])
 {
     int i, j;
     for(i = 0; a[i] != '\0' && b[i] != '\0'; i++) {
         if(a[i] < b[i]) {
             return -1;
         }
         if(a[i] > b[i]) {
             return 1;
         }
     }
     if(getCharLength(a) == getCharLength(b)) {
         return 0;
     }
     if(getCharLength(a) < getCharLength(b)) {
         return -1;
     }
     if(getCharLength(a) > getCharLength(b)) {
         return 1;
     }
 }
void main (){


    int result = string_compare("bitue", "farha");

    printf("%d", result);






}
