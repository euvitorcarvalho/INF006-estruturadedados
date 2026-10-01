#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct Produto {
  char* nome;
  float preco;
} Produto;

typedef struct Funcionario {
  char* nome;
  char* CPF;
  float salario;
} Funcionario;

typedef struct Mesa {
  int numero;
  int dividaEmAberto;
} Mesa;

typedef struct Bar {
  char* nome;
  char* CNPJ;
  Mesa** mesas;
  Funcionario** funcionarios;
  Produto** produtos;
} Bar;

int main(){
    Produto* pastel = malloc(sizeof(Produto));
}