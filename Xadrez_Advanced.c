#include <stdio.h>

int main(){

    int T , R, B, C;
    int movimentoC = 1;//Flag para o movimento do cavalo

    //Move a Rainha 8 casas
    do{
        printf("Esquerda\n");//Imprime a direção movimentada
        R++;
    } while (R <= 8);
    
    //Move o Bispo 5 casas
    while (B <= 5){
        printf("Cima, Direita\n");//Imprime a direção movimentada
        B++;
    }
    
    //Mover a Torre 5 casas
    for (T = 0; T < 5; T++){
        printf("Direita\n");//Imprime a direção movimentada
    }
    while (movimentoC --)
    {
        for (C = 0; C < 2; C++)
        {
            printf("Baixo\n");//Imprime cima duas vezes
        }
        printf("Esquerda\n");//imprime cima uma vez
    }
    
    

    return 0;
}