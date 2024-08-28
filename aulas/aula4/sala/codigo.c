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

   struct Pessoa felipe;
   //solicite ao usuario o nome, o genero e a idade
   printf ("escreva o nome: ");
   scanf("%99[^\n]%*c", felipe.nome);
   printf("Introduza o gênero: ");
   scanf(" %c", &felipe.genero);
   rintf("Introduza a idade: ");
   scanf("%d%*c", &felipe.idade);

   //exiba os dados de volta para o console
   printf("Nome: %s\n", felipe.nome);
   printf("Idade: %d\n", felipe.idade);
   printf("Gênero: %c\n", felipe.genero);
    return 0;
   }