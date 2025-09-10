#include <stdio.h>



void movertorre(int casast){
    if (casast > 0){
        printf("Direita\n");
        movertorre(casast - 1);
    }// executa o movimento da torre
}

void moverbispo(int casasb){
    if (casasb > 0){
        printf("Cima, Direita\n");
        moverbispo (casasb - 1);
    }// executa o movimento do bispo
}
void moverrainha(int casasr){
    if (casasr > 0){
        printf("Esquerda\n");
        moverrainha (casasr - 1);
    }    // executa o movimento da rainha
}

void movercavalo(int casasc){
    if (casasc > 0)
    {// verifica se o numero é maior que zero e maior que um para poder executar o movimento para baixo
        for (casasc > 0; casasc > 1; casasc--)
        {
            printf("Baixo\n");
        }
        printf("Esquerda\n");

    }
    //Faz a movimentação do cavalo
}

int main(){
    movertorre(5);
    moverbispo(5);
    moverrainha(8);
    movercavalo(3);

    return 0;
}

