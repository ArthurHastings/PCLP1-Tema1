#include <stdio.h>
#include <string.h>

#define SAPTE 7
#define UNSPREZECE 11


int main() {
    int N = 0;
    printf("Introduceti valoarea numarului natural N:\n");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i > 1) {
            printf(" ");
        }
        if (i % SAPTE == 0 && i % UNSPREZECE == 0) {
            printf("TrickOrTreat");
            continue;
        }

        if (i % SAPTE == 0) {
            printf("Trick");
            continue;
        }

        if (i % UNSPREZECE == 0) {
            printf("Treat");
            continue;
        }
        printf("%d", i);
    }
}
