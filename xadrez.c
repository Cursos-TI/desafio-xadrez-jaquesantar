#include <stdio.h>

int main(){

    // TORRE 5 CASAS PARA DIREITA

        for (int t = 0; t < 5 ; t++){
            printf ("Torre moveu para direita\n");
        }

    // BISPO 5 CASAS DIAGONAL DIREITA

        printf("\nBispo\n");

        int b = 1;

        do
        {
            printf ("Bispo moveu %d para diagonal direita\n", b);
            b++;
        } while (b <= 5);

    // RAINHA 8 CASAS ESQUERDA 

        printf ("\nRainha\n");  

        int r = 1;
            
        while ( r <= 8)
        {
            printf("Rainha moveu %d casas para esquerda!\n",r);
            r++;
        }

    // CAVALO 2 casas para cima e 1 casa direita

        printf("\nCavalo\n");

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
