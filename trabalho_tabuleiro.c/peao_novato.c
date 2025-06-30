#include <stdio.h>

int main () {
//Lista de Variáveis e seus Nomes utilizados nesse Código.
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

//Mensagem de Boas - Vindas.
printf("Bem - Vindo(a) ao nosso Programa de Xadrez\n");
printf("Ficamos Felizes com sua Participação Neste Projeto!!\n");


//Comando de Movimento da Torre (Utilizando a Estrutura FOR).
//Caso 'i' for menor que o Número de casas (5), além de Imprimir a Mensagem, 'i' repete ela até chegar á 5.
printf("\nLocomoção da Torre\n");
 for (int i = 0; i < casas_torre; i++) {
 printf("Direita\n");
 }


//Comando de Movimento do Bispo (Utilizando a Estrutura WHILE).
//Aqui, Crio mais uma variável que é igual á 0.
//E caso ela ser menor que o número de casas dessa Peça (5), ele Imprime a mensagem até chegar á 5.
printf("\nLocomoção do Bispo\n");
 int contas_bispo = 0;
 while (contas_bispo < casas_bispo) {
 printf("Cima Direita\n");
 contas_bispo++;
 }
 

//Comando de Movimento da Rainha (Utilizando a Estrutura DO - WHILE).
//Aqui, Crio mais uma variável que é igual á 0.
//E caso ela ser menor que o número de casas dessa Peça (5), ele Imprime a mensagem até chegar á 5. (Até o WHILE)
printf("\nLocomoção da Rainha\n");
 int contas_rainha = 0;
do {
 printf("Esquerda\n");
 contas_rainha++;
} while (contas_rainha < casas_rainha);


 return 0;
}