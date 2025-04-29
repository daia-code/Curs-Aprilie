#include <stdio.h>

int main(){        
    char mat[3][2]; 
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
          scanf(" %c",&mat[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
         printf("mat[%d][%d]= %c \n",i,j,mat[i][j]);
        }
    }
   

    return 0;
}