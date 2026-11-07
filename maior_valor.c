#include <stdio.h>

#define TAMANHO 5

int main(void)
{
    int v_lido[TAMANHO], i, maior, posicao = 0;

    for (i = 0; i < TAMANHO; i++) {
        printf("Digite v[%d] = ", i);
        scanf("%d", &v_lido[i]);
    }

    maior = v_lido[0];
    for (i = 1; i < TAMANHO; i++) {
        if (v_lido[i] > maior) {
            maior = v_lido[i];
            posicao = i;
        }
    }

    printf("\n\nMaior valor: %d\n", maior);
    printf("Posicao: v[%d]\n", posicao);
    return 0;
}
