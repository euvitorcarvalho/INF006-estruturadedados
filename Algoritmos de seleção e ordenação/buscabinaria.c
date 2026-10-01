#include <stdio.h>

int busca_binaria(int* arr, int item, int tamanho) {
  int inicio = 0;
  int fim = tamanho - 1;
  printf("inicio: %d", inicio);
  printf("fim: %d", fim);
  while (inicio < fim) {
    int meio = (inicio + fim) / 2;
    printf("meio: %d", meio);
    break;
  }
}

int main() {
  int item = 16;

  int arr_vazio[] = {};
  int arr_unico[] = {42};
  int arr_dois[] = {10, 20};
  int arr_impar[] = {10, 20, 30, 40, 50};
  int arr_par[] = {10, 20, 30, 40, 50, 60};

  int tamanho = sizeof(arr_par) / sizeof(arr_par[0]);
  printf("tamanho: %d", tamanho);

  busca_binaria(arr_par, item, tamanho);

  return 0;
}
