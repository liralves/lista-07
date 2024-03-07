#include <stdio.h>

int main()
{
    int n1, n2;
    
    printf("Informe um valor qualquer: ");
    scanf("%d", &n1);
    printf("Informe um outro valor qualquer: ");
    scanf("%d", &n2);
    
    printf("\nEndereço de memória do primeiro valor inserido: %p\n", &n1);
    printf("Endereço de memória do segundo valor inserido: %p", &n2);
    
    return 0;
}
