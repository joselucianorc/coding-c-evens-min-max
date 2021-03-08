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

/* In�cio da funcao main */
int main() { 

	int iNumInicial = 1; /* Pedimos a reserva de um peda�o da mem�ria para armazenar um n�mero inteiro, apelidando esse lugar de "iNumInicial" e gravamos nele o n�mero 1 */
	int iNumFinal = 12; /* Idem com o nome iNumFinal2 */
	int iNumero;
	int iContaImpressos = 0;

	/* Imprime um t�tulo do programa */
	printf("Primeiro programa\n\n");

	printf("Lista dos numeros pares entre %d e %d\n", iNumInicial, iNumFinal );

	//Inicializa o n�mero com o valor do n�mero inicial
	iNumero = iNumInicial;

INICIO:
	/* Se iNumero maior que o iNumFinal n�o h� mais n�meros a imprimir*/
	if (iNumero > iNumFinal) {
		/* Sai do loop e vai para a rotina chamada FIM */
		goto FIM;
	}

	/* Se o resto da divis�o do n�mero for zero o n�mero � par */
	if (iNumero % 2 == 0) {
		/* Imprime o n�mero par*/
		printf("%d \n", iNumero);
		iContaImpressos = iContaImpressos + 1;
	}

	/* Incrementa o iN�mero */
	iNumero = iNumero + 1;

	/* Vai para a rotina de INICIO */
	goto INICIO;

FIM:
	//Imprime o total de n�meros que foram impressos
	printf("Total de numeros pares impressos = %d\n", iContaImpressos);

	/* Caso o n�mero inicial seja impar */
	if (iNumInicial % 2 == 1) {
		printf("Numero inicial nao foi impresso por ser impar\n");
	}

	/* Caso o n�mero final seja impar */
	if (iNumFinal % 2 == 1) { 
		printf("Numero final nao foi impresso por ser impar\n");
	}

	return 0;
} /* Fim da Fun��o main */