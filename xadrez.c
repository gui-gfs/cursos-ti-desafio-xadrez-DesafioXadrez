#include <stdio.h>
int main() {
//deefinindo as distâncias que as peças vão andar
int casasTorre = 5;
int casasBispo = 5;
int casasRainha = 8;

//recursividade (torre, bispo e rainha

//torre: 5 casas para a direita
//função chama ela para repetir o passo até chegar no 0
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1); 
    }
}
//rainha: 8 casas para a esquerda
//função chama ela pra repetir
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

//bispo: 5 casas na diagonal
//mistura de repetição que chama loops um dentro do outro
void moverBispo(int casas) {
    if (casas > 0) {
        //loop de fora cuida do sobe e o de dentro do pro lado
        for (int v = 0; v < 1; v++) { 
            for (int h = 0; h < 1; h++) {
                printf("Cima, Direita\n");
            }
        }
        moverBispo(casas - 1); //depois de fazer o l pequeno, chama a próxima casa
    }
}

    printf("\nMovimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n"); //pula a linha

    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    //loops para o cavalo
    //um loop para fazer o desenho do L
    printf("Movimento do Cavalo:\n");
    
    //o for controla tudo usando as variáveis i e j ao mesmo tempo
    for (int i = 1, j = 1; i <= 3; i++) {
        if (i <= 2) {
            printf("Cima\n");
            continue; //pula o resto e volta pro topo até subir as 2 casas
        }
        
        //quando termina de subir o while faz ele virar o pé do L
        while (j <= 1) {
            printf("Direita\n");
            j++;
        }
        break; //para tudo pra ele não andar mais
    }

    return 0;
}
