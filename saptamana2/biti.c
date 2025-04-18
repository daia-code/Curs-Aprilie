#include <stdio.h>>
#include <stdlib.h>

int main(){
    int a = 5; // 0101
int b = 3; // 0011
int c = a | b; //    0111  2^0=1 + 2^1=2 + 2^2=4    7
printf("%d\n", c); // prints 7
}