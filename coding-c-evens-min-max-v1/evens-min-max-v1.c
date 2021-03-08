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

/* Início da funcao main */
int main() { 

	int iNumInicial = 1; /* Pedimos a reserva de um pedaço da memória para armazenar um número inteiro, apelidando esse lugar de "iNumInicial" e gravamos nele o número 1 */
	int iNumFinal = 12; /* Idem com o nome iNumFinal2 */
	int iNumero;
	int iContaImpressos = 0;

	/* Imprime um título do programa */
	printf("Primeiro programa\n\n");

	printf("Lista dos numeros pares entre %d e %d\n", iNumInicial, iNumFinal );

	//Inicializa o número com o valor do número inicial
	iNumero = iNumInicial;

INICIO:
	/* Se iNumero maior que o iNumFinal não há mais números a imprimir*/
	if (iNumero > iNumFinal) {
		/* Sai do loop e vai para a rotina chamada FIM */
		goto FIM;
	}

	/* Se o resto da divisão do número for zero o número é par */
	if (iNumero % 2 == 0) {
		/* Imprime o número par*/
		printf("%d \n", iNumero);
		iContaImpressos = iContaImpressos + 1;
	}

	/* Incrementa o iNúmero */
	iNumero = iNumero + 1;

	/* Vai para a rotina de INICIO */
	goto INICIO;

FIM:
	//Imprime o total de números que foram impressos
	printf("Total de numeros pares impressos = %d\n", iContaImpressos);

	/* Caso o número inicial seja impar */
	if (iNumInicial % 2 == 1) {
		printf("Numero inicial nao foi impresso por ser impar\n");
	}

	/* Caso o número final seja impar */
	if (iNumFinal % 2 == 1) { 
		printf("Numero final nao foi impresso por ser impar\n");
	}

	return 0;
} /* Fim da Função main */