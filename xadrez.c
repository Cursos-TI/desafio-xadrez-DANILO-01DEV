#include <stdio.h>

int main(){
    //torre: SE MOVE EM LINHA RETA NA HORIZONTAL DIREITA E ESQUERDA PARA FRENTE E PARA TRAZ QUANTAS CASAS QUIZER DESDE QUE I CAMINHIO ESTEJA LIVRE
    //bispo: MOVESE EM LINHAS DIAGONAIS PARA FRENTE E TRAZ POR QUANTAS CASAS QUISER( CADA BISPO PERMANESSE SEMPRE A COR DA CASA QUE INICIOU O JOGO)
    //rainha: A PEÇA MAIS PODEROZA DO JOGO MOVE-SE EM QUAL QUER DIREÇAO POR QUANTAS CASAS QUISER DESDE QUE O CAMINHO ESTEJA LIVRE
   

    
    // ----------------------------------------------------
    // TORRE: 5 casas para a Direita (Usando FOR)
    // ----------------------------------------------------
    printf("==== movimento da torre ====\n");
    for (int torre = 0; torre < 5; torre++ ) {
        printf("Direita\n");// Saída pedida: apenas a direção, seguida de nova linha.
        }
    printf("a torre chegou ao seu destino.\n");

    
    // ----------------------------------------------------
    // BISPO: 5 casas Diagonal Cima/Direita (Usando WHILE)
    // ----------------------------------------------------
    printf("\n==== movimento do bispo ====\n");
    int bispo = 1;
    while (bispo <= 5)
    { 
        printf("Cima, Direita\n");
        bispo++;
    }
    printf("o bispo chegou ao seu destino.\n");


    // ----------------------------------------------------
    // RAINHA: 8 casas para a Esquerda (Usando DO-WHILE)
    // ----------------------------------------------------
    printf("\n==== movimento da rainha ====\n");
    int rainha = 1;
    do //ENTRADA (EXECUÇAO DE PELO MENOS 1X GARANTIDA)
    {
        printf("esquerda\n"); // SAIDA
        rainha++; // INCREMENTO
    } while (rainha <= 8); //CONDIÇOES
    printf("a rainha chegou ao seu destino.\n");

      // ----------------------------------------------------
    // CAVALO: 2 casas para a baixo 1 para esquerda (Usando FOR E WHILE OU DO-WHILE LOOP ANINHADO)
    // ----------------------------------------------------
    printf("\n==== movimento da cavalo ====\n");
    
    for ( int i = 0; i < 2; i++){
        printf("baixo\n");
    }
    int j = 0;
    while (j < 1){ //imprimindo 1x "Esquerda"
        printf("esquerda\n");
        j++;
        }
    printf("a cavalo chegou ao seu destino.\n");   
    
    
   return 0;
}
