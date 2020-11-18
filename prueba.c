#include <stdio.h>
#include <stdlib.h>


int factorial(int n){
    if(n > 1)
    {
        return n * factorial(n-1);
    }else
    {
        return 1;
    }
    
    
}

int inicial = 0;
int inicial2 = 1;
int generado = 0;

int fibonacci(){

    generado = inicial + inicial2;
    inicial = inicial2;
    inicial2 = generado;

    return generado;    
}

int main()
{
    int a, resultado, i;
    printf("Digita un numero: ");
    scanf("%d", &a);
    resultado = factorial(a);

    printf("El resultado factorizacion %d \n", resultado);
    
    for (i = 0; i < a; i++)
    {
        printf("El resultado fibonacci %d \n", fibonacci());
    }
    printf("%d", i);
    return 0;
}

// Ejercisio de factorial

