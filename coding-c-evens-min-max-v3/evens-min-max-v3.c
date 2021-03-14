//Tarefa 1: definir o número mínimo e o máximo para a lista de números pares que será impressa.
//Tarefa 2: imprimir um cabeçalho com o seguinte texto: "Lista dos números pares entre ... e ...
//Tarefa 3: imprimir os números pares entre o mínimo e o máximo, inclusive estes caso sejam pares
//Tarefa 4: imprimir uma mensagem final notificando o total de números que foram impressos
//Tarefa 5: imprimir uma segunda mensagem final de notificação, quando o mínimo ou o máximo não forem números pares

//VERSÃO 3 MELHORADA DO PROGRAMA
/*
	a) Usando estruturas de dados
	b) Usando função inicializadora para a estrutura
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

/* Início da funcao main */
int main() 
{
	ListaPares minhaLista;
	minhaLista = ListaParesInicia(minhaLista);

	int iNumero;

	/* Imprime um título do programa */
	printf("Primeiro programa\n\n");

	/* Pedir que o usuário informe os números inicial e final */
	printf("Preencha: numero inicial e numero final [esc-enter para default's]:\n\n");

	/* Fazendo a leitura dos dados entrados pelo usuário*/
	scanf_s("%d%d", &minhaLista.m_iNumInicial, &minhaLista.m_iNumFinal);

	/* Checar se número inicial é ímpar */
	minhaLista.m_bNumIncialImpar = minhaLista.m_iNumInicial & 1;

	if (minhaLista.m_iNumFinal < minhaLista.m_iNumInicial) {
		printf("Numero Final nao pode ser menor que o Inicial\n");
		return 0;
	}
	
	/* Checa se número inicial igual ao número final e se um deles é impar */
	if (minhaLista.m_iNumInicial == minhaLista.m_iNumFinal && minhaLista.m_bNumIncialImpar) {
		printf("Sao iguais e impares: nada a imprimir\n");
		return 0;
	}

	printf("Lista dos numeros pares entre %d e %d\n", minhaLista.m_iNumInicial, minhaLista.m_iNumFinal);

	//Inicializa o número com o valor do número inicial
	iNumero = minhaLista.m_iNumInicial;

	if (minhaLista.m_bNumIncialImpar) {
		minhaLista.m_iNumInicial++;
	}

	for (iNumero = minhaLista.m_iNumInicial; iNumero <= minhaLista.m_iNumFinal; iNumero += 2) {
		printf("%d\n", iNumero);
	}

	//Imprime o total de números que foram impressos
	printf("Total de numeros pares impressos = %d\n", (minhaLista.m_iNumFinal - minhaLista.m_iNumInicial) / 2 + 1);

	/* Caso o número inicial seja impar */
	if (minhaLista.m_bNumIncialImpar) {
		printf("Numero inicial nao foi impresso por ser impar\n");
	}

	/* Caso o número final seja impar */
	if (minhaLista.m_iNumFinal & 1) {
		printf("Numero final nao foi impresso por ser impar\n");
	}

	return 0;
} /* Fim da Função main */