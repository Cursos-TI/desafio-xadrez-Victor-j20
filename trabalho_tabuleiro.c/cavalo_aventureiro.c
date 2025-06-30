#include <stdio.h>

int main () {
//Lista de Variáveis e seus Nomes utilizados nesse Código.
    int casas_torre = 5;
    int pulos_cavalo = 2;
    int casas_bispo = 5;
    int casas_rainha = 8;

//Mensagem de Boas - Vindas.
printf("Bem - Vindo(a) ao nosso Programa de Xadrez\n");
printf("Ficamos Felizes com sua Participação Neste Projeto!!\n");


//Comando de Movimento da Torre (Utilizando a Estrutura FOR).
printf("\nLocomoção da Torre\n");
 for (int i = 0; i < casas_torre; i++) {
 printf("Direita\n");
 }


//Comando de Movimento do Bispo (Utilizando a Estrutura WHILE).
printf("\nLocomoção do Bispo\n");
 int contas_bispo = 0;
 while (contas_bispo < casas_bispo) {
 printf("Cima Direita\n");
 contas_bispo++;
 }
 

//Comando de Movimento da Rainha (Utilizando a Estrutura DO - WHILE).
printf("\nLocomoção da Rainha\n");
 int contas_rainha = 0;
do {
 printf("Esquerda\n");
 contas_rainha++;
} while (contas_rainha < casas_rainha);


//Comando de Movimento do Cavalo (Utilizando as Estruturas FOR e WHILE Aninhadas).
//Utilizo 2 FOR: 'i' e 'c' para as os Movimentos de Baixo.
// E um WHILE para o Movimento Esquerda.
printf("\nLocomoção do Cavalo\n");

for (int i = 0; i < 1; i++) {
  for (int c = 0; c < 2; c++) {
  printf ("Baixo\n"); 
  }

   int j = 0;  
   while (j < 1) {
     printf("Esquerda\n");
     j++;
  }
}

 return 0;
}