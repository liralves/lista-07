#include <stdio.h>

int main()
{
    char c = 'a';
    char *pc = &c;
    
    
    printf("Endereço da variável [C]: %p\n", &c);
    printf("Valor atribuido de [C]: %c\n", c);
    printf("Valor que [PC] armazena:  %c\n", *pc);
    printf("Endereço de [PC]: %p\n", &pc);
    

    return 0;
}
