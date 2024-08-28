#include <stdio.h>

struct Pessoa {
  char nome[100];      // 100 bytes
  int idade;           //   4 bytes
  char genero; // M, F //   1 byte
};

int main(void) {
  struct Pessoa pessoa1 = {"João", 30, 'M'};
  //struct Pessoa pessoa1 = {.nome = "João", .idade = 30, .genero = 'M'};

  printf("Acessando dados de pessoa1:\n");
  printf("Nome: %s\n", pessoa1.nome);
  printf("Idade: %d\n", pessoa1.idade);
  printf("Gênero: %c\n", pessoa1.genero);
  
    struct Pessoa pessoa2
  sscanf ("ana maria\n", "%99[^\n]", pessoa2.nome);
  sscanf ("19\n", %d, pessoa2.idade);
  sscanf ("F\n", %c, pessoa2.genero);

  printf("Acessando dados de pessoa2:\n");
  printf("Nome: %s\n", pessoa2.nome);
  printf("Idade: %d\n", pessoa2.idade);
  printf("Gênero: %c\n", pessoa2.genero);
  
  return 0;
}