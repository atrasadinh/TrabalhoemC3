#include <stdio.h>

int main() {
    int b;
    char c, opcao;

    do {
        printf("B: ");
        scanf("%d", &b);
        if (b < 5 || b % 2 == 0) {
            printf("Erro! B tem que ser impar e maior ou igual a 5!\n");
        }
    } while (b < 5 || b % 2 == 0);

    printf("C: ");
    scanf(" %c", &c);

    do {
        printf("Opcao (T ou L): ");
        scanf(" %c", &opcao);
        if (opcao != 'T' && opcao != 'L') {
            printf("Erro! Opcao tem que ser 'T' ou 'L'\n");
        }
    } while (opcao != 'T' && opcao != 'L');

    switch (opcao) {
        case 'T': {
            for (int i = 1; i <= b; i += 2) {
                int espacos = (b - i) / 2;
                for (int j = 0; j < espacos; j++) {
                    printf(" ");
                }
                for (int j = 0; j < i; j++) {
                    if (j == 0 || j == i - 1 || i == b) {
                        printf("%c", c);
                    } else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            break;
        }

        case 'L': {
            int meio = b / 2;
            for (int i = 0; i < b; i++) {
                int espacos;
                if (i <= meio) {
                    espacos = meio - i;
                } else {
                    espacos = i - meio;
                }
                int largura = b - 2 * espacos;

                for (int j = 0; j < espacos; j++) {
                    printf(" ");
                }

                for (int j = 0; j < largura; j++) {
                    if (j == 0 || j == largura - 1) {
                        printf("%c", c);
                    } else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            break;
        }
    }

    return 0;
}
