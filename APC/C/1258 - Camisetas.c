#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct {
    char nome[30];
    char cor[30];
    char tam;
} Camiseta;

int compare(Camiseta *a, Camiseta *b) {
    if (strcmp((a->cor), "branco") == 0) {
        if (strcmp((b->cor), "vermelho") == 0) {
            return -1;
        } else {
            if (a->tam == 'G') {
                if (b->tam != 'G') {
                    return 1;
                } else {
                    return(strcmp(a->nome, b->nome));
                }
            } else if (a->tam == 'M') {
                if (b-> tam == 'G') {
                    return -1;
                } else if (b->tam == 'P') {
                    return 1;
                } else {
                    return(strcmp(a->nome, b->nome));
                }
            } else {
                if (b->tam != 'P') {
                    return -1;
                } else {
                    return(strcmp(a->nome, b->nome));
                }
            }
        }
    } else {
        if (strcmp((b->cor), "branco") == 0) {
            return 1;
        } else {
            if (a->tam == 'G') {
                if (b->tam != 'G') {
                    return 1;
                } else {
                    return(strcmp(a->nome, b->nome));
                }
            } else if (a->tam == 'M') {
                if (b-> tam == 'G') {
                    return -1;
                } else if (b->tam == 'P') {
                    return 1;
                } else {
                    return(strcmp(a->nome, b->nome));
                }
            } else {
                if (b->tam != 'P') {
                    return -1;
                } else {
                    return(strcmp(a->nome, b->nome));
                }
            }
        }
    }
    return -1;
}

int main() {
    int n;
    int firstCase = 1;

    while (1) {
        scanf("%d", &n);
        getchar();

        if (n == 0) {
            break;
        }

        if (!firstCase) {
            printf("\n");
        }
        firstCase = 0;

        Camiseta camisetas[n];

        for (int i = 0; i < n; i++) {
            scanf("%[^\n]", camisetas[i].nome);
            getchar();
            scanf("%s %c", camisetas[i].cor, &camisetas[i].tam);
            getchar();
        }

        qsort(camisetas, n, sizeof(Camiseta), compare);

        for (int i = 0; i < n; i++) {
            printf("%s %c %s\n", camisetas[i].cor, camisetas[i].tam, camisetas[i].nome);
        }
    }

    return 0;
}
