// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Constantes
#define tamanho 10

// Variáveis
int lista[tamanho];
int ordenado[tamanho];
int opt=-1;
int qtd;

// Prototipação
void menu_mostrar(void);
void lista_mostrar(void);
void lista_gerar(void);
void lista_ler(void);
void lista_limpar(void);
void lista_mostrar_ordenado(void);
int bubbleSort (int vec[]);
void  troca (int* a, int* b);


// Função Principal
int main(void) {
	srand(time(NULL));
	do {
		system("cls");
		lista_mostrar();
		lista_mostrar_ordenado();
		menu_mostrar();
		scanf("%d", &opt);
		switch (opt) {
			case 1:
				lista_gerar();
				break;
			case 2:
				lista_ler();
				break;
			case 3:
				bubbleSort (int vec[]);
				break;
				
		}
	}while(opt!=0);
	system("pause");
	return 0;
}

// Mostra o conteúdo da lista
void lista_mostrar(void) {
	printf("[ ");
	for (int i = 0; i < tamanho; i++) {
		printf("%d ", lista[i]);
	}
	printf("]\n\n");
}

// Mostra o menu
void menu_mostrar(void) {
	printf("1 - Gerar lista aleatoriamente\n");
	printf("2 - Criar lista manualmente\n");
	printf("3 - BubbleSort\n");
	printf("0 - Sair...\n\n");
}

// Gera uma lista aleatória
void lista_gerar(void) {
	for (int i = 0; i < tamanho; i++) {
		lista[i] = rand()%50;
	}
}

// Permite que o usuário entre com os valores da lista
void lista_ler(void) {
	for (int i = 0; i < tamanho; i++) {
		system("cls");
		lista_mostrar();
		printf("\nDigite o valor para a posição %d: ", i);
		scanf("%d", &lista[i]);
	}
}

// Preparar a lista para ordenação
void lista_limpar(void) {
	for (int i = 0; i < tamanho; i++) {
		ordenado[i] = lista[i];
	}
}

// Mostra o conteúdo da lista ordenada
void lista_mostrar_ordenado(void) {
	printf("[ ");
	for (int i = 0; i < tamanho; i++) {
		printf("%d ", ordenado[i]);
	}
	printf("] Tempo = %d iteracoes\n\n", qtd);
}

// Aplica o método do bubbleSort
int bubbleSort (int vec[]) {
	int qtd, i, j, tmp;
	qtd = 0;
	for (i = 0; i < tamanho -1; i++) {
		for (j = i + 1; j < tamanho; j++) {
			if (vec[i] > vec[j]) {
				troca(&vec[i], &vec[j]);
			}
			qtd++;
		}
	}
	return(qtd);
}

// Função genérica de troca de valores
void  troca (int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}


