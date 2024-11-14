#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  
    
    while (T--) {
        int N;
        scanf("%d", &N);  
        
        int A[N];
        int sum = 0;
        int count_1 = 0, count_neg1 = 0;
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            sum += A[i];
            if (A[i] == 1) {
                count_1++;
            } else if (A[i] == -1) {
                count_neg1++;
            }
        }
        
        if (sum % 2 != 0) {
            printf("-1\n");  
        } else {
            int required_flips = abs(count_1 - count_neg1) / 2;
            printf("%d\n", required_flips); 
        }
    }
    
    return 0;
}
