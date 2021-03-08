//Tarefa 1: definir o número mínimo e o máximo para a lista de números pares que será impressa.
//Tarefa 2: imprimir um cabeçalho com o seguinte texto: "Lista dos números pares entre ... e ...
//Tarefa 3: imprimir os números pares entre o mínimo e o máximo, inclusive estes caso sejam pares
//Tarefa 4: imprimir uma mensagem final notificando o total de números que foram impressos
//Tarefa 5: imprimir uma segunda mensagem final de notificação, quando o mínimo ou o máximo não forem números pares

//VERSÃO 2 MELHORADA DO PROGRAMA
/*
	a) Interação com o usuário referente a funcionalidade de entrada dos números
	b) Mensagens finais impressas incorretamente em algumas situações
	c) Não é necessário iterar de um por um e ainda perguntar a cada passo do laço
	d) O uso do goto é admitido pela linguagem e justificável apenas em algumas situações
	e) Melhorar a linha de instrução que incrementa o valor da variável
	f) Reavaliar a necessidade da variável iContaImpressos
	g) O uso do operador de módulo é mais lento por envolver divisão
	h) Constantes brutas sendo atribuídas a variáveis não são uma boa prática. 
	i) Tornar mais clara a intenção no usoCriar sinônimos para tipos
*/

#include <stdio.h>

/* Constantes */
#define NUM_INICIAL_DEFAULT 1 
#define NUM_FINAL_DEFAULT 12 
#define FALSE 0
#define TRUE 1

typedef int BOOL;

/* Início da funcao main */
int main() { 

	int iNumInicial = NUM_INICIAL_DEFAULT; /* Pedimos a reserva de um pedaço da memória para armazenar um número inteiro, apelidando esse lugar de "iNumInicial" e gravamos nele o número 1 */
	int iNumFinal = NUM_FINAL_DEFAULT; /* Idem com o nome iNumFinal2 */
	int iNumero;
	BOOL bNumInicial_e_impar;

	/* Imprime um título do programa */
	printf("Primeiro programa\n\n");

	/* Pedir que o usuário informe os números inicial e final */
	printf("Preencha: numero inicial e numero final [esc-enter para default's]:\n\n");
	
	/* Fazendo a leitura dos dados entrados pelo usuário*/
	scanf_s("%d%d", &iNumInicial, &iNumFinal);

	/* Checar se número inicial é ímpar */
	bNumInicial_e_impar = iNumInicial & 1;
	
	if (iNumFinal < iNumInicial) {
		printf("Numero Final nao pode ser menor que o Inicial\n");
		return 0;
	}

	/* Checa se número inicial igual ao número final e se um deles é impar */
	if (iNumInicial == iNumFinal && bNumInicial_e_impar) {
			printf("Sao iguais e impares: nada a imprimir\n");
			return 0;
	}

	printf("Lista dos numeros pares entre %d e %d\n", iNumInicial, iNumFinal );

	//Inicializa o número com o valor do número inicial
	iNumero = iNumInicial;

	if (bNumInicial_e_impar) {
		iNumInicial++;
	}

	for (iNumero = iNumInicial; iNumero <= iNumFinal; iNumero += 2) {
		printf("%d\n", iNumero);
	}

	//Imprime o total de números que foram impressos
	printf("Total de numeros pares impressos = %d\n", (iNumFinal - iNumInicial)/2 + 1);

	/* Caso o número inicial seja impar */
	if (bNumInicial_e_impar) {
		printf("Numero inicial nao foi impresso por ser impar\n");
	}

	/* Caso o número final seja impar */
	if (iNumFinal & 1) { 
		printf("Numero final nao foi impresso por ser impar\n");
	}

	return 0;
} /* Fim da Função main */