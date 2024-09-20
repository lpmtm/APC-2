#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Declare a função pause
void pause() {
    printf("Pressione Enter para continuar...\n");
    getchar();
}

// move o cursor para a posição (x,y) do console
void gotoxy(int x, int y) { printf("\033[%d;%df", y, x); }

// limpa a tela do console
void clear() { printf("\033[2J"); }

// função para desenhar um pixel na posição (x,y) do console
void draw_xy(int x, int y, unsigned char r, unsigned char g, unsigned char b) {
  // get console coordinates and draw rgbaPixel
  gotoxy(x, y);
  printf("\033[48;2;%d;%d;%dm  \033[0;00m", r, g, b);
}

#define R 0xff000000
#define G 0x00ff0000
#define B 0x0000ff00
#define A 0x000000ff

#define RGBA(r, g, b, a) (r << 24 | g << 16 | b << 8 | a)

void draw_image(int imagem[10][10]) {
    for (int y = 0; y < 10; y++) {
        for (int x = 0; x < 10; x++) {
            unsigned char r = (imagem[y][x] >> 24) & 0xFF;
            unsigned char g = (imagem[y][x] >> 16) & 0xFF;
            unsigned char b = (imagem[y][x] >> 8) & 0xFF;
            draw_xy(x + 1, y + 1, r, g, b); 
        }
    }
}


int main() {
  // imagem 10x10
  int imagem[10][10] = {{RGBA(255, 0, 0, 255), RGBA(230, 25, 25, 255),
                         RGBA(204, 51, 51, 255), RGBA(179, 76, 76, 255),
                         RGBA(153, 102, 102, 255), RGBA(128, 128, 128, 255),
                         RGBA(102, 153, 153, 255), RGBA(76, 179, 179, 255),
                         RGBA(51, 204, 204, 255), RGBA(25, 230, 230, 255)},
                        {RGBA(255, 25, 0, 255), RGBA(230, 51, 25, 255),
                         RGBA(204, 76, 51, 255), RGBA(179, 102, 76, 255),
                         RGBA(153, 128, 102, 255), RGBA(128, 153, 128, 255),
                         RGBA(102, 179, 153, 255), RGBA(76, 204, 179, 255),
                         RGBA(51, 230, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 51, 0, 255), RGBA(230, 76, 25, 255),
                         RGBA(204, 102, 51, 255), RGBA(179, 128, 76, 255),
                         RGBA(153, 153, 102, 255), RGBA(128, 179, 128, 255),
                         RGBA(102, 204, 153, 255), RGBA(76, 230, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 76, 0, 255), RGBA(230, 102, 25, 255),
                         RGBA(204, 128, 51, 255), RGBA(179, 153, 76, 255),
                         RGBA(153, 179, 102, 255), RGBA(128, 204, 128, 255),
                         RGBA(102, 230, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 102, 0, 255), RGBA(230, 128, 25, 255),
                         RGBA(204, 153, 51, 255), RGBA(179, 179, 76, 255),
                         RGBA(153, 204, 102, 255), RGBA(128, 230, 128, 255),
                         RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 128, 0, 255), RGBA(230, 153, 25, 255),
                         RGBA(204, 179, 51, 255), RGBA(179, 204, 76, 255),
                         RGBA(153, 230, 102, 255), RGBA(128, 255, 128, 255),
                         RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 153, 0, 255), RGBA(230, 179, 25, 255),
                         RGBA(204, 204, 51, 255), RGBA(179, 230, 76, 255),
                         RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255),
                         RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 179, 0, 255), RGBA(230, 204, 25, 255),
                         RGBA(204, 230, 51, 255), RGBA(179, 255, 76, 255),
                         RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255),
                         RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 204, 0, 255), RGBA(230, 230, 25, 255),
                         RGBA(204, 255, 51, 255), RGBA(179, 255, 76, 255),
                         RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255),
                         RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)},
                        {RGBA(255, 230, 0, 255), RGBA(230, 255, 25, 255),
                         RGBA(204, 255, 51, 255), RGBA(179, 255, 76, 255),
                         RGBA(153, 255, 102, 255), RGBA(128, 255, 128, 255),
                         RGBA(102, 255, 153, 255), RGBA(76, 255, 179, 255),
                         RGBA(51, 255, 204, 255), RGBA(25, 255, 230, 255)}};

      // copia imagem original para imagem 2
      int imagem2[10][10];
      for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++)
          imagem2[x][y] = imagem[x][y];
      }

      // copia imagem original para imagem 3
      int imagem3[10][10];
      for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++)
          imagem3[x][y] = imagem[x][y];
      }

      // copia imagem original para imagem 4
      int imagem4[10][10];
      for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++)
          imagem4[x][y] = imagem[x][y];
      }

      // copia imagem original para imagem 5
      int imagem5[10][10];
      for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++)
          imagem5[x][y] = imagem[x][y];
      }

      // copia imagem original para imagem 6
      int imagem6[10][10];
      for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++)
          imagem6[x][y] = imagem[x][y];
      }

      // copia imagem original para imagem 7
      int imagem7[10][10];
      for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++)
          imagem7[x][y] = imagem[x][y];
      }

      // copia imagem original para imagem 8
      int imagem8[10][10];
      for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++)
          imagem8[x][y] = imagem[x][y];
      }

      // copia imagem original para imagem 9
      int imagem9[10][10];
      for (int x = 0; x < 10; x++) {
        for (int y = 0; y < 10; y++)
          imagem9[x][y] = imagem[x][y];
      }

    
    // Exercício 1: Remover o canal vermelho da imagem2
    unsigned char *pchar2 = (unsigned char *)imagem2;
    for (int i = 0; i < 10 * 10 * 4; i += 4) {
        pchar2[i] = 0; 
    }
    printf("\nImagem sem canal vermelho (imagem2):\n");
    draw_image(imagem2);
    pause();

    // Exercício 2: Converter a imagem3 para escala de cinza
    unsigned char *pchar3 = (unsigned char *)imagem3;
    for (int i = 0; i < 10 * 10 * 4; i += 4) {
        int media = round((pchar3[i] + pchar3[i + 1] + pchar3[i + 2]) / 3.0);
        pchar3[i] = media;      
        pchar3[i + 1] = media;  
        pchar3[i + 2] = media;  
    }
    printf("\nImagem em escala de cinza (imagem3):\n");
    draw_image(imagem3);
    pause();

    // Exercício 3: Desenhar um X na imagem4 (diagonal principal e secundária)
    unsigned char *pchar4 = (unsigned char *)imagem4;
    for (int lin = 0; lin < 10; lin++) {
        for (int col = 0; col < 10; col++) {
            if (lin == col || lin == (9 - col)) { 
                pchar4[(lin * 10 * 4) + (col * 4)] = 255;     
                pchar4[(lin * 10 * 4) + (col * 4) + 1] = 0;   
                pchar4[(lin * 10 * 4) + (col * 4) + 2] = 0;   
            }
        }
    }
    printf("\nImagem com X desenhado (imagem4):\n");
    draw_image(imagem4);
    pause();

    // Exercício 4: Desenhar uma borda na imagem5
    unsigned char *pchar5 = (unsigned char *)imagem5;
    for (int lin = 0; lin < 10; lin++) {
        for (int col = 0; col < 10; col++) {
            if (lin == 0 || lin == 9 || col == 0 || col == 9) { 
                pchar5[(lin * 10 * 4) + (col * 4)] = 255;     
                pchar5[(lin * 10 * 4) + (col * 4) + 1] = 0;   
                pchar5[(lin * 10 * 4) + (col * 4) + 2] = 0;   
            }
        }
    }
    printf("\nImagem com borda (imagem5):\n");
    draw_image(imagem5);
    pause();

    // Exercício 5: Desenhar meia árvore de natal na imagem6
    unsigned char *pchar6 = (unsigned char *)imagem6;
    for (int lin = 0; lin < 10; lin++) {
        for (int col = 0; col <= lin; col++) { 
            pchar6[(lin * 10 * 4) + (col * 4)] = 0;      
            pchar6[(lin * 10 * 4) + (col * 4) + 1] = 255;  
            pchar6[(lin * 10 * 4) + (col * 4) + 2] = 0;    
        }
    }
    printf("\nMeia árvore de natal (imagem6):\n");
    draw_image(imagem6);
    pause();

    // Exercício 6: Desenhar meia árvore de natal invertida na imagem7
    unsigned char *pchar7 = (unsigned char *)imagem7;
    for (int lin = 0; lin < 10; lin++) {
        for (int col = 0; col <= 9 - lin; col++) { 
            pchar7[(lin * 10 * 4) + (col * 4)] = 0;      
            pchar7[(lin * 10 * 4) + (col * 4) + 1] = 0;  
            pchar7[(lin * 10 * 4) + (col * 4) + 2] = 255; 
        }
    }
    printf("\nMeia árvore de natal invertida (imagem7):\n");
    draw_image(imagem7);
    pause();

    // Exercício 7: Interseção dos padrões das imagens6 e 7 na imagem8
    unsigned char *pchar8 = (unsigned char *)imagem8;
    for (int lin = 0; lin < 10; lin++) {
        for (int col = 0; col < 10; col++) {
            if ((pchar6[(lin * 10 * 4) + (col * 4) + 1] == 255) && (pchar7[(lin * 10 * 4) + (col * 4) + 2] == 255)) {
                pchar8[(lin * 10 * 4) + (col * 4)] = 255;     
                pchar8[(lin * 10 * 4) + (col * 4) + 1] = 255; 
                pchar8[(lin * 10 * 4) + (col * 4) + 2] = 0;   
            }
        }
    }
    printf("\nInterseção das árvores (imagem8):\n");
    draw_image(imagem8);
    pause();

    return 0;
}