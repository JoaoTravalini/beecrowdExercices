#include <stdio.h>

int main() {
    int N, quantia, total = 0, coelhos = 0, ratos = 0, sapos = 0;

    scanf("%d", &N);

    while (N > 0) {
        char tipo;
        scanf(" %d %c", &quantia, &tipo);

        switch (tipo) {
            case 'C':
                coelhos += quantia;
                break;
            case 'R':
                ratos += quantia;
                break;
            case 'S':
                sapos += quantia;
                break;
            default:
                break;
        }

        total += quantia;

        N--;
    }

    double pc = (coelhos * 100.0) / total;
    double pr = (ratos * 100.0) / total;
    double ps = (sapos * 100.0) / total;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", pc);
    printf("Percentual de ratos: %.2lf %%\n", pr);
    printf("Percentual de sapos: %.2lf %%\n", ps);

    return 0;
}