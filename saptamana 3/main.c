#include <stdio.h>
//int adunare(int x, int y){
//    printf("%d\n", x+y);
//    return 0;
//}

//int main() {
//    int x=10, y=9;
//    adunare(x,y);
//    adunare(10, 12);
//    return 0;
//}



//int main() {
//    int x=10, y=11;
//    printf("%d", x);
//   int x=&y;
//    printf(" %d", x);
//    return 0;
//}



// int main() {
//     int n;
    
//     printf("Introduceti nr de elemente: ");
//     scanf("%d", &n);
    
//     int arr[n];
    
//     for(int i=0;i<n;i++){
//         scanf("%d", &arr[i]);
//     }
    
//     printf("\n ");
    
//     for(int i=0;i<n;i++){
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }



// int main(){
//     int mat[2][2] = {{1, 2}, {3, 4}};
//     for(int i=0;i<2;i++){
//         for(int j=0;j<2;j++){
//             printf("mat[%d][%d]= %d \n", i, j, mat[i][j]);
//         }
//     }
//     return 0;
// }



int main(){
    char mat[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            scanf(" %c", &mat[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("mat[%d][%d]= %c \n", i, j, mat[i][j]);
        }
    }
    return 0;
}