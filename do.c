 #include <stdio.h>
 #include <string.h>
 int main()
 {
     char saarc[7][100] = {"Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives"};

     int name_length , row =7 ;

     for(int i=0 ; i< row ; i++){
        name_length = strlen(saarc[i]);
        for(int j =0 ; j< name_length ; j++){
            printf("%c ", saarc[i][j]);
        }
        printf("\n");
     }

     return 0;
 }
