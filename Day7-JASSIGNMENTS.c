#include <stdio.h>

int main() {
    int T, X;
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &T);
        if (X <= 7) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}