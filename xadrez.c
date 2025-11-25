#include <stdio.h>

// Funções Recursivas (Torre, Bispo, Rainha) 

// 1. TORRE (movimento : direita)
void moverTorre(int casas) {
    if (casas > 0) {
        printf("direita\n");
        moverTorre(casas - 1); // Passo recursivo
    }
}


// 2. BISPO (movimento diagonal: Cima e direita)
// Requisito: implementado com recursividade e loops aninhados
void moverBispo(int casas) { 
    if (casas > 0){
       for (int i = 0; i < 1; i++) { // Loop externo: simula o passo vertical (Cima)
            printf("Cima\n");
            for (int j = 0; j < 1; j++) { // Loop interno: simula o passo horizontal (Direita)
                printf("direita\n");
            }
        }
     moverBispo(casas - 1); // Passo recursivo
    }
        
}
            

// 3. RAINHA (movimento : Esquerda)
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); // Passo recursivo
    }
}

//  Funções com Loops Complexos (Cavalo) 

// 4. CAVALO (movimento L: duas casas cima, uma casa direita)
// Requisito: Utilizar loops aninhados com múltiplas variáveis e/ou condições, com continue e break.
void moverCavalo() {
    printf("movimento em L (duas cima, uma direita):\n");
    int passov = 0; // passo vertical (máximo 2)
    int passoh = 0; // passo horizontal (máximo 1)

    // Loop principal para o movimento vertical (duas casas Cima)
    for (int i = 0; i < 3; i++) { // i < 3 para garantir duas iterações (0, 1) antes de sair
        if (passov >= 2) {
            break; // Sai do loop após 2 casas (movimento vertical concluído)
        }
        printf("cima\n");
        passov++;

        // Loop aninhado para o movimento horizontal (uma casa direita)
        // Este loop será executado apenas após o movimento vertical for concluído (passo_v == 2)
        for (int j = 0; j < 2; j++) {
            if (passov < 2) {
                continue; // Continua para a próxima iteração do loop externo (termina o movimento vertical primeiro)
            }
            if (passoh >= 1) {
                break; // Sai do loop horizontal após 1 casa (Movimento horizontal concluído)
            }
            printf("direita\n");
            passoh++;
        }
    }
}

//  Função Principal 
int main() {

    printf("=== SIMULACAO DE MOVIMENTOS DE XADREZ ===\n");

    // 1. TORRE (Recursividade)
    printf("\n--- movimento da torre (5 casas direita) ---\n");
    moverTorre(5);
    printf("\n"); // Linha em branco para separar


    // 2. BISPO (Recursividade + Loops Aninhados)
    printf("\n--- movimento do bispo (5 casas diagonal Cima/Direita) ---\n");
    moverBispo(5);
    printf("\n"); // Linha em branco para separar


    // 3. RAINHA (Recursividade)
    printf("\n--- movimento da rainha (8 casas Esquerda) ---\n");
    moverRainha(8);
    printf("\n"); // Linha em branco para separar
    

    // 4. CAVALO (Loops Complexos Aninhados)
    printf("\n--- movimento do cavalo ---\n");
    moverCavalo();
    printf("\n"); // Linha em branco para separar*/

    return 0;
}