#include <stdio.h>

int main(){

    int num=0,num1=0,suma=0;
    
        suma=suma+num,
        printf("Dime un número: ");
        scanf("%d",&num);   
        printf("Dime otro número:");
        scanf("%d",&num1);

        suma=num1+num;

        printf("La suma es %d\n", suma);

}