#include <stdio.h>
#include <stdlib.h>

int main() {
    int altura, comprimento, i, xi, xanterior = 0, quant = 0;
    scanf("%d", &altura);
    scanf("%d", &comprimento);

    while (altura != 0 && comprimento != 0) {
        for (i = 0; i < comprimento; i++) {
            scanf("%d", &xi);
            if (i == 0) {
                quant += altura - xi;
            } else if (xi < xanterior) {
                quant += xanterior - xi;
            }
            xanterior = xi;
        }
        printf("%d\n", quant);

        scanf("%d", &altura);
        scanf("%d", &comprimento);
        quant = 0;
        xanterior = 0;
    }

    return 0;
}