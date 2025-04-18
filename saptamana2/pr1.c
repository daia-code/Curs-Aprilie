#include <stdio.h>
#include <stdlib.h>
int main(){
    int x=4;
    // if (x < 5 && x>1 ) { //   ambele trebuie sa fie adevarete (true)
    if (x > 5 || x<1) { //  doar una dintre conditii trebuie sa fie adevarata (true)
        printf("%d se afla in unul dintre intervale %d  sau %d",x,1,5);
    } else {
        printf(" %d nu se afla in niciunul dintre intervalele mentionate",x);
    }
    
}