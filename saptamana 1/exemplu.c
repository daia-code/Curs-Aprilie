#include <stdio.h>
int main(void)
{
int x, y;
printf("Introduceti doua numere intregi :");
scanf("%d %d", &x, &y);
printf("Adunarea lui %d cu %d este : %d \n",x,y,x+y);
printf("Scaderea lui %d din %d este : %d \n",x,y,x-y);
printf("Inmultirea lui %d cu %d este : %d \n",x,y,x*y);
printf("Impartirea lui %d cu %d este : %d \n ",x,y,x/y);
return 0;
}
