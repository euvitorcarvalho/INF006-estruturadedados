#include <stdbool.h>
#include <stdio.h>

void mesh(int* vetorA, int* vetorB, int* vetorC) {
  int aCont = 0;
  int bCont = 0;
  int cCont = 0;

  while (aCont < 4 && bCont < 4) {
    if (vetorA[aCont] < vetorB[bCont]) {
      vetorC[cCont] = vetorA[aCont];
      aCont++;
    } else if (vetorB[bCont] < vetorA[aCont]) {
      vetorC[cCont] = vetorB[bCont];
      bCont++;
    }
    cCont++;
  }

  while (aCont < 4) {
    vetorC[cCont] = vetorA[aCont];
    aCont++;
    cCont++;
  }

  while (bCont < 4) {
    vetorC[cCont] = vetorB[bCont];
    bCont++;
    cCont++;
  }
}

int main() {
  int vetorA[] = {7, 8, 10, 27};
  int vetorB[] = {1, 5, 6, 19};
  int vetorC[8];

  for (int i = 0; i < 8; i++) {
    vetorC[i] = -1;
  }

  mesh(vetorA, vetorB, vetorC);

  for (int i = 0; i < 8; i++) {
    printf("%d ,", vetorC[i]);
  }

  return 0;
}