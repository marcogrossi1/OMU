#include <stdio.h>

int main(){

    int m, ano_equalizador = 1;

    printf("Insira a quantidade de dias da semana desse planeta: "); 
    scanf("%d", &m); //Assume-se que 1 <= m <= 360

    if(ano_equalizador % m == 0) //Verificando se m|360.
        printf("\nTodo ano é equalizador!\n");

    else{
        while (360*ano_equalizador % m) //Como, inicialmente m não divide 360, acrescenta-se um ano e verifica-se novamente até encontrar o primeiro ano equalizador.
            ano_equalizador++;

        printf("\nA cada %d anos, teremos um ano equalizador!\n", ano_equalizador);
    }

    return 0;
}