#include <stdio.h>

int main() {
    int T, X, A, B, score;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d %d %d", &X, &A, &B);

        score = A + 2 * B;

        if (score >= X) {
            printf("Qualify\n");
        } else {
            printf("NotQualify\n");
        }
    }

    return 0;
}
