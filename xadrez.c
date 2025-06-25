#include <stdio.h>


void movertorre(int casas){
    if (casas > 0){
        printf("Torre moveu %d casas para direita\n", casas);
        movertorre(casas -1);
    }
}

void moverbispo (int casas){
    if (casas > 0){
        printf("Bispo moveu %d casas para diagonal\n", casas);
        moverbispo(casas -1);
    }
}
void moverrainha (int casas){
    if (casas > 0){
        printf("Rainha moveu %d casas para esquerda \n", casas);
        moverrainha(casas -1);
    }
}
int main(){

    printf("Movimento torre\n");

    movertorre(5);

    printf("\n Movimento bispo\n");
    
    moverbispo(5);

    printf("\n Movimento rainha\n");

    moverrainha(8);

 
    // CAVALO 2 casas para cima e 1 casa direita

        printf("\nMovimento Cavalo\n");

        int movimentocavalo = 1;

        while (movimentocavalo--)
        {
           for(int i = 0; i < 2 ; i++) {
            printf("Cima\n");
           }
           printf ("Direita\n");
        }
        
        
    return 0;
}
