#include<stdio.h>


void upper_case (char name[] , int n ) {

    for(int i =0 ; i< n ; i++){


        if(name[i]>=97 && name[i]<=122){
            name[i]= 65 + (name[i]-97);
        }


    }

    printf(" after function   %s", name);


}
void main (){



    char name[] ="biTuE";
    printf("%s \n", name);

    for(int i =0 ; i< 5 ; i++){
        if(name[i]>= 65 && name[i] <= 90) {
            name[i] = 97 + ( name[i] - 65);
        }
    }

    printf("%s", name);

    printf("before uppercase ............\n %s ", name);
    upper_case(name, 5);
    printf("after the uppercase function is done \n ",name);




    char google[2];

    printf("%d scanf func return is ", scanf("%s",google));
    printf("%s google is",google);







}
