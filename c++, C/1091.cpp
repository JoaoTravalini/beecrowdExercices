#include <stdio.h>

int main() {
    int k, n, m, x, y;

    while (1) {
        scanf("%d", &k);

        if (k == 0) {
            break;
        }

        scanf("%d %d", &n, &m);

        while (k--) {
            scanf("%d %d", &x, &y);

            if (x == n || y == m) {
                printf("divisa\n");
            } else if (x > n && y > m) {
                printf("NE\n");
            } else if (x > n && y < m) {
                printf("SE\n");
            } else if (x < n && y > m) {
                printf("NO\n");
            } else {
                printf("SO\n");
            }
        }
    }

    return 0;
}