#include <stdio.h>

int main() {
    int N;

    while (1) {
        scanf("%d", &N);

        if (N == 0)
            break;

        for (int i = 0; i < N; i++) {
            int a, b, c, d, e;
            scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

            if (a <= 127 && b > 127 && c > 127 && d > 127 && e > 127) {
                printf("A\n");
            } else if (a > 127 && b <= 127 && c > 127 && d > 127 && e > 127) {
                printf("B\n");
            } else if (a > 127 && b > 127 && c <= 127 && d > 127 && e > 127) {
                printf("C\n");
            } else if (a > 127 && b > 127 && c > 127 && d <= 127 && e > 127) {
                printf("D\n");
            } else if (a > 127 && b > 127 && c > 127 && d > 127 && e <= 127) {
                printf("E\n");
            } else {
                printf("*\n");
            }
        }
    }

    return 0;
}