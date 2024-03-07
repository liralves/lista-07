#include <stdio.h>

int main()
{
    int numero = 1, *ptr1 = &numero;
    float decimal = 1.20, *ptr2 = &decimal;
    char palavra = 'a', *ptr3 = &palavra;
    
    printf("Valor original da variável número: %d\n", numero);
    *ptr1 = 10;
    printf("Novo valor da variável número: %d\n", numero);
    ///////
    printf("Valor original da variável decimal: %.2f\n", decimal);
    *ptr2 = 20.10;
    printf("Novo valor da variável decimal: %.2f\n", decimal);
    //////
    printf("Valor original da variável palavra: %c\n", palavra);
    *ptr3 = 'b';
    printf("Novo valor da variável decimal: %c\n", palavra);
    
    return 0;
}
