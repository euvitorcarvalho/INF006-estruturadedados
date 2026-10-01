#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertion_sort(int* A, int length) {
  // Percorre o vetor a partir do segundo elemento.
  // O primeiro elemento, sozinho, já pode ser considerado ordenado.
  for (int j = 1; j < length; j++) {
    // Guarda o elemento atual, chamado de chave, antes de deslocar os demais.
    int key = A[j];
    // Começa a comparar a chave com o elemento imediatamente anterior.
        int i = j - 1;

    // Enquanto houver elementos anteriores maiores que a chave,
    // desloca cada um deles uma posição para a direita.
    while (i >= 0 && A[i] > key) {
      A[i + 1] = A[i];
      i--;
    }

    // Coloca a chave na posição correta dentro da parte já ordenada.
    A[i + 1] = key;
  }
}

int main() {
  // Define a quantidade de elementos que serão armazenados.
  int length = 10;

  // Reserva memória para o vetor com a quantidade definida de inteiros.
  int* A = malloc(length * sizeof(int));

  // Inicializa o gerador de números aleatórios usando o horário atual.
  srand(time(NULL));

  // Preenche cada posição do vetor com um número entre 0 e 99.
  for (int i = 0; i < length; i++) {
    A[i] = rand() % 100;
  }

  // Exibe o vetor no estado original, antes da ordenação.
  printf("Array before sorting:\n");
  for (int i = 0; i < length; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");

  // Ordena o vetor em ordem crescente usando o Insertion Sort.
  insertion_sort(A, length);

  // Exibe o vetor depois que a ordenação foi concluída.
  printf("Array after sorting:\n");
  for (int i = 0; i < length; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");

  // Libera a memória reservada para o vetor.
  free(A);

  // Informa ao sistema operacional que o programa terminou corretamente.
  return 0;
}