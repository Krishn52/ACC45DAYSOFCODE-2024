#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        int count = 0;

        for (int day = 2; day <= N; day += 7) {
            count++;
        }
        printf("%d\n", count);
    }

    return 0;
}
