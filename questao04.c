#include <stdio.h>
 
void troca(int* a, int* b) {
 
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
 
}
 
int main() {
 
    int n1, n2;
    
    printf("Digite o valor de a: ");
    scanf("%d", &n1);
    printf("Digite o valor de b: ");
    scanf("%d", &n2);
    
    troca(&n1, &n2);
 
    printf("\nNovo valor de a: %d\n", n1);
    printf("Novo valor de b: %d", n2);
 
    return 0;
 
}
