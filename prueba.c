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

int main()
{
    int a, resultado;
    printf("Digita un numero: ");
    scanf("%d", &a);
    resultado = factorial(a);
    printf("El resultado es %d \n", resultado);

    return 0;
}

