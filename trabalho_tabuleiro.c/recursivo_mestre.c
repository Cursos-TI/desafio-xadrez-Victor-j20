#include <stdio.h>
//Código Lógicamente Recursivo para a Torre.
//Na Recursividade, crio um 'void' com um nome e uma variável nele.
//Uso um 'if' para caso a Variável (Número de Casas) seja maior que 0.
//Ele imprime o movimento da peça quantas vezes necessário até chegar á 0.
//O mesmo se aplica á Rainha e o Bispo.
void recursivo_t(int contador_t) {
    if (contador_t > 0) {
    printf("Direita\n");
    recursivo_t(contador_t - 1);
  }
}

//Aqui, A Recursividade do Bispo é um pouco Diferente.
//Criei um void e 2 variáveis: uma para a quantidade de casas e outra para o máximo que chegar essa quantidade.
//Se o máximo for maior que o número de casas, então faço duas estruturas FOR, que as duas imprimem os movimentos: Cima e Baixo.
//Claro, depende do número de casas que cada peça possui, no caso do bispo são 5, então isso se repete 5 vezes (de 0 até 4).
//E cada vez mais que isso se repete, incrementa +1 na variável.
void recursivo_b(int movimento, int maximus) {
    if (movimento < maximus) {
    for (int i = 0; i < 1; i++) {
      printf("\nCima\n");
       for (int j = 0; j < 1; j++) {
       printf("Direita\n");
       }
    }
    recursivo_b(movimento + 1, maximus);
    }
}

//Código Lógicamente Recursivo para a Torre.
void recursivo_r(int cont_r) {
    if (cont_r > 0) {
    printf ("Esquerda\n");
    recursivo_r(cont_r - 1);
    }
}

int main () {
//Lista de Variáveis e seus Nomes utilizados nesse Código.
    int casas_torre = 5;
    int pulos_cavalo = 3;
    int casas_bispo = 5;
    int casas_rainha = 8;

//Mensagem de Boas - Vindas.
printf("Bem - Vindo(a) ao nosso Programa de Xadrez\n");
printf("Ficamos Felizes com sua Participação Neste Projeto!!\n");


//Comando de Movimento da Torre, Recursivamente Referenciado.
printf("\nLocomoção da Torre\n");
recursivo_t(casas_torre);

//Comando de Movimento do Bispo, Recursivamente Referenciado. 
printf("\nLocomoção do Bispo");
recursivo_b(0, casas_bispo);

//Comando de Movimento da Rainha, Recursivamente Referenciado.
printf("\nLocomoção da Rainha\n");
recursivo_r(casas_rainha);

//Comando de Movimento do Cavalo. (Única Peça não utilizada Recursivamente.)
//Onde aqui funciona a Seguinte Lógica:
//O cavalo roda no código: "Nº Salto do Cavalo: Cima 2x e Direita".
//O Salto roda 3 vezes.
//Mas colocamos uma Função 'IF', que se a Variável 'l' for igual á 1, Imprime a Mensagem e é usada a Função 'Continue'.
//E ainda incrementa +1, até chegar a Função Break que pela Lógica de mais um 'IF' Substitui o Movimento 'Direita' no Final.
printf("\nLocomoção do Cavalo\n");
for (int l = 0; l < pulos_cavalo; l++) {

if (l == 1) {
printf("\n %dº Salto do Cavalo Foi Ignorado pelo 'Continue'\n", l + 1);
continue;
}

printf("\n %dº Salto do Cavalo:\n", l + 1);
int parar = 0;

  for (int i = 0; i < 2; i++) {
  printf ("Cima\n");   
  
    if ( i == 1 && l == pulos_cavalo - 1) {
    printf("Interrompendo a Direita com um 'Break'\n"); 
    parar = 1;
    break;
    }
  }

//Aqui é onde interrompe o Movimento Direita, se a Variável 'Parar' for diferente de 1, aí que interrompe pelo Break.
  if (!parar) {
    int j = 0;  
    while (j < 1) {
    printf("Direita\n");
     j++;
    }
  }
}

//Fim do Código em C.
printf("\nFim do Programa Xadrez, Aguarde mais Atualizações...\n");
 return 0;
}