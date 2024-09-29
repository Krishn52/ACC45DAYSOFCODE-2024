#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);
        int subscription;
        if (N % 6 == 0) {
            subscription = N / 6; 
        } else {
            subscription = N / 6 + 1;
        }
        int total_cost = subscription * X;
        printf("%d\n", total_cost);
    }

    return 0;
}
