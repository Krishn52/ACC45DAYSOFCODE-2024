#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);  

    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B);  
        int rounds = log2(N);
        int total_time = 0;

        for (int i = 0; i < rounds; i++) {
            total_time += A; 
            if (i < rounds - 1) {
                total_time += B; 
            }
        }

        printf("%d\n", total_time);
    }

    return 0;
}
