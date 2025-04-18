#include <stdio.h>
#include <stdlib.h>


int main(){
    int n=26;
    int suma = 0;
    while (n != 0) {  // 26    sum = 6
    suma += n % 10;   // n=2     sum (6)= 6+2 =>8 
    n /= 10;          // n=0
    }
    printf("%d", suma);  // 8
    return 0;

}