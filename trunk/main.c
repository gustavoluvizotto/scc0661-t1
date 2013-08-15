/* 
 * File:   main.c
 * Author: gustavo
 *
 * Created on August 13, 2013, 8:53 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct { /*struct do pixel*/
    unsigned char red, green, blue;
} RGB;

typedef struct { /*struct do cabeçalho do arquivo*/
    unsigned char ch1, ch2, ch3, ch4, ch5, ch6, ch7, ch8, ch9, ch10, ch11, ch12, ch13, ch14; /*14 bytes*/
} FILEHEADER;

typedef struct { /*struct do cabeçalho da imagem*/
    int tamanho, largura, altura, int1, int2, int3, int4, int5, int6, int7; /*40 bytes*/
} IMAGEHEADER;

int main() {
    FILE *fp;
    RGB **m;
    FILEHEADER fileheader;
    IMAGEHEADER imageheader;
    int i, j;
    char name[20];

    printf("Nome da imagem mais extensão: ");
    scanf("%s", name);
    if ((fp = fopen(name, "rb")) == NULL) {
        printf("Erro!");
        exit(0);
    }
    fread(&fileheader, sizeof (FILEHEADER), 1, fp);
    fread(&imageheader, sizeof (IMAGEHEADER), 1, fp);
    printf("%dx%d\n", imageheader.largura, imageheader.altura);

    m = (RGB **) malloc(imageheader.altura * sizeof (RGB));
    for (i = 0; i < imageheader.altura; i++)
        m[i] = (RGB *) malloc(imageheader.largura * sizeof (RGB) * 1.1);
    printf("Alocou RGB");
    for (i = 0; i < imageheader.altura; i++) {
        for (j = 0; j < imageheader.largura; j++) {
            fread(&m[i][j].red, 1, 1, fp);
            fread(&m[i][j].green, 1, 1, fp);
            fread(&m[i][j].blue, 1, 1, fp);
        }
    }
    printf("depois de ler RGB");
    fclose(fp);
    return (EXIT_SUCCESS);
}

