#include <stdio.h>

int main() {
    while (1) {
        int senha;
        scanf("%d", &senha);
        if ( senha == 2002){

            puts("Acesso Permitido");
            break;
        }
        else puts("Senha Invalida");
    }
 
    return 0;
}