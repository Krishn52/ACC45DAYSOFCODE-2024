#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);
    
    while (T--) {
        int N; 
        scanf("%d", &N);
        int count = 0;

        if (N >= 2) {
            count++; 
            for (int day = 9; day <= N; day += 7) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
