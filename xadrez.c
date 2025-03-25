#include <stdio.h>

// Criação das funções recursivas

//Função do movimento da torre, movendo a direita enquanto o valor de casas dor maior que 0
void moverTorre(int casas) {
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}
//Função do movimento do bispo, movendo diagonalmene a cima e direita, enquanto o valor de casas dor maior que 0
void moverBispo(int casas) {
    if (casas > 0)
    {
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }
}
//Função do movimento da rainha, movendo a esquerda enquanto o valor de casas dor maior que 0
void moverRainha(int casas) {
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}
//Função do movimento do cavalo, movendo para baixo enquanto as casa forem maiores de 1, reservando
//o ultimo movimento para a esquerda, fazendo o L
void moverCavalo(int casas) {
    if (casas > 1)
    {
        printf("Baixo\n");
        moverCavalo(casas - 1);
    }
    if (casas == 1)
    {
        printf("Esquerda\n");
    }
}

//Execução das funções, com print declarando a peça que está movendo
int main() {
    printf("Movimento da Torre\n");
    moverTorre(5);
    printf("Movimento do Bispo\n");
    moverBispo(5);
    printf("Movimento da Rainha\n");
    moverRainha(8);
    printf("Movimento do Cavalo\n");
    moverCavalo(3);

    return 0;
}
