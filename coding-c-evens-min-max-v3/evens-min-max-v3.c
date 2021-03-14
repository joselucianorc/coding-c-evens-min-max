//Tarefa 1: definir o n�mero m�nimo e o m�ximo para a lista de n�meros pares que ser� impressa.
//Tarefa 2: imprimir um cabe�alho com o seguinte texto: "Lista dos n�meros pares entre ... e ...
//Tarefa 3: imprimir os n�meros pares entre o m�nimo e o m�ximo, inclusive estes caso sejam pares
//Tarefa 4: imprimir uma mensagem final notificando o total de n�meros que foram impressos
//Tarefa 5: imprimir uma segunda mensagem final de notifica��o, quando o m�nimo ou o m�ximo n�o forem n�meros pares

//VERS�O 3 MELHORADA DO PROGRAMA
/*
	a) Usando estruturas de dados
	b) Usando fun��o inicializadora para a estrutura
	c) Separando constantes em um arquivo header
*/

#include <stdio.h>
#include "constantes.h"

typedef int BOOL;

typedef struct _ListaPares 
{
	int m_iNumInicial;
	int m_iNumFinal;
	BOOL m_bNumIncialImpar;
} ListaPares;

ListaPares ListaParesInicia(ListaPares Param)
{
	Param.m_iNumInicial = NUM_INICIAL_DEFAULT;
	Param.m_iNumFinal = NUM_FINAL_DEFAULT;
	Param.m_bNumIncialImpar = FALSE;
}

/* In�cio da funcao main */
int main() 
{
	ListaPares minhaLista;
	minhaLista = ListaParesInicia(minhaLista);

	int iNumero;

	/* Imprime um t�tulo do programa */
	printf("Primeiro programa\n\n");

	/* Pedir que o usu�rio informe os n�meros inicial e final */
	printf("Preencha: numero inicial e numero final [esc-enter para default's]:\n\n");

	/* Fazendo a leitura dos dados entrados pelo usu�rio*/
	scanf_s("%d%d", &minhaLista.m_iNumInicial, &minhaLista.m_iNumFinal);

	/* Checar se n�mero inicial � �mpar */
	minhaLista.m_bNumIncialImpar = minhaLista.m_iNumInicial & 1;

	if (minhaLista.m_iNumFinal < minhaLista.m_iNumInicial) {
		printf("Numero Final nao pode ser menor que o Inicial\n");
		return 0;
	}
	
	/* Checa se n�mero inicial igual ao n�mero final e se um deles � impar */
	if (minhaLista.m_iNumInicial == minhaLista.m_iNumFinal && minhaLista.m_bNumIncialImpar) {
		printf("Sao iguais e impares: nada a imprimir\n");
		return 0;
	}

	printf("Lista dos numeros pares entre %d e %d\n", minhaLista.m_iNumInicial, minhaLista.m_iNumFinal);

	//Inicializa o n�mero com o valor do n�mero inicial
	iNumero = minhaLista.m_iNumInicial;

	if (minhaLista.m_bNumIncialImpar) {
		minhaLista.m_iNumInicial++;
	}

	for (iNumero = minhaLista.m_iNumInicial; iNumero <= minhaLista.m_iNumFinal; iNumero += 2) {
		printf("%d\n", iNumero);
	}

	//Imprime o total de n�meros que foram impressos
	printf("Total de numeros pares impressos = %d\n", (minhaLista.m_iNumFinal - minhaLista.m_iNumInicial) / 2 + 1);

	/* Caso o n�mero inicial seja impar */
	if (minhaLista.m_bNumIncialImpar) {
		printf("Numero inicial nao foi impresso por ser impar\n");
	}

	/* Caso o n�mero final seja impar */
	if (minhaLista.m_iNumFinal & 1) {
		printf("Numero final nao foi impresso por ser impar\n");
	}

	return 0;
} /* Fim da Fun��o main */