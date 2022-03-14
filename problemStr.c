#include<stdio.h>
#include<string.h>


void main (){

    char name[1000] ;
    char outfit[0];

    gets(name);


    int len = strlen(name);
    printf("%d", len);

    for(int i=0 ; i< len ; i++){
        if(i ==0) {
            continue ;
        }
        if(name[i] ==' ' && (( name[i-1] >=65 && name[i-1] <=122 ) && ( name[i+1] >=65 && name[i+1] <=122 ))) {
            name[i]='\n';

        }


    }





    printf("%s", name);









}
