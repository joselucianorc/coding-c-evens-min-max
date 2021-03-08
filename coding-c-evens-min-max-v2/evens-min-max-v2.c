//Tarefa 1: definir o n�mero m�nimo e o m�ximo para a lista de n�meros pares que ser� impressa.
//Tarefa 2: imprimir um cabe�alho com o seguinte texto: "Lista dos n�meros pares entre ... e ...
//Tarefa 3: imprimir os n�meros pares entre o m�nimo e o m�ximo, inclusive estes caso sejam pares
//Tarefa 4: imprimir uma mensagem final notificando o total de n�meros que foram impressos
//Tarefa 5: imprimir uma segunda mensagem final de notifica��o, quando o m�nimo ou o m�ximo n�o forem n�meros pares

//VERS�O 2 MELHORADA DO PROGRAMA
/*
	a) Intera��o com o usu�rio referente a funcionalidade de entrada dos n�meros
	b) Mensagens finais impressas incorretamente em algumas situa��es
	c) N�o � necess�rio iterar de um por um e ainda perguntar a cada passo do la�o
	d) O uso do goto � admitido pela linguagem e justific�vel apenas em algumas situa��es
	e) Melhorar a linha de instru��o que incrementa o valor da vari�vel
	f) Reavaliar a necessidade da vari�vel iContaImpressos
	g) O uso do operador de m�dulo � mais lento por envolver divis�o
	h) Constantes brutas sendo atribu�das a vari�veis n�o s�o uma boa pr�tica. 
	i) Tornar mais clara a inten��o no usoCriar sin�nimos para tipos
*/

#include <stdio.h>

/* Constantes */
#define NUM_INICIAL_DEFAULT 1 
#define NUM_FINAL_DEFAULT 12 
#define FALSE 0
#define TRUE 1

typedef int BOOL;

/* In�cio da funcao main */
int main() { 

	int iNumInicial = NUM_INICIAL_DEFAULT; /* Pedimos a reserva de um peda�o da mem�ria para armazenar um n�mero inteiro, apelidando esse lugar de "iNumInicial" e gravamos nele o n�mero 1 */
	int iNumFinal = NUM_FINAL_DEFAULT; /* Idem com o nome iNumFinal2 */
	int iNumero;
	BOOL bNumInicial_e_impar;

	/* Imprime um t�tulo do programa */
	printf("Primeiro programa\n\n");

	/* Pedir que o usu�rio informe os n�meros inicial e final */
	printf("Preencha: numero inicial e numero final [esc-enter para default's]:\n\n");
	
	/* Fazendo a leitura dos dados entrados pelo usu�rio*/
	scanf_s("%d%d", &iNumInicial, &iNumFinal);

	/* Checar se n�mero inicial � �mpar */
	bNumInicial_e_impar = iNumInicial & 1;
	
	if (iNumFinal < iNumInicial) {
		printf("Numero Final nao pode ser menor que o Inicial\n");
		return 0;
	}

	/* Checa se n�mero inicial igual ao n�mero final e se um deles � impar */
	if (iNumInicial == iNumFinal && bNumInicial_e_impar) {
			printf("Sao iguais e impares: nada a imprimir\n");
			return 0;
	}

	printf("Lista dos numeros pares entre %d e %d\n", iNumInicial, iNumFinal );

	//Inicializa o n�mero com o valor do n�mero inicial
	iNumero = iNumInicial;

	if (bNumInicial_e_impar) {
		iNumInicial++;
	}

	for (iNumero = iNumInicial; iNumero <= iNumFinal; iNumero += 2) {
		printf("%d\n", iNumero);
	}

	//Imprime o total de n�meros que foram impressos
	printf("Total de numeros pares impressos = %d\n", (iNumFinal - iNumInicial)/2 + 1);

	/* Caso o n�mero inicial seja impar */
	if (bNumInicial_e_impar) {
		printf("Numero inicial nao foi impresso por ser impar\n");
	}

	/* Caso o n�mero final seja impar */
	if (iNumFinal & 1) { 
		printf("Numero final nao foi impresso por ser impar\n");
	}

	return 0;
} /* Fim da Fun��o main */