#include <stdio.h>
 
int main() {
 
    int jpar, jimpar, teste = 1, qtd, idx;
    char nomepar[20];
    char nomeimpar[20];

    while (1)
    {
        scanf("%d", &qtd);
        if (qtd == 0)
        {
            break;
        }
        scanf("%s", nomepar);
        scanf("%s", nomeimpar);
        printf("Teste %d\n", teste);
        for (idx = 0; idx < qtd; idx++)
        {
            scanf("%d %d", &jpar, &jimpar);
            if ((jpar + jimpar) % 2 == 0)
            {
                printf("%s\n", nomepar);
            }
            else
            {
                printf("%s\n", nomeimpar);
            }
        }
        printf("\n");
        teste++;
    }
    return 0;
}