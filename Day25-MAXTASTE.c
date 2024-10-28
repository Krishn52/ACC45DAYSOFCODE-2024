#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int a, b, c, d; 
        scanf("%d %d %d %d", &a, &b, &c, &d);

        
        int tastiness1 = a + c; // A and C
        int tastiness2 = a + d; // A and D
        int tastiness3 = b + c; // B and C
        int tastiness4 = b + d; // B and D

        
        int max_tastiness = tastiness1; 

        if (tastiness2 > max_tastiness) {
            max_tastiness = tastiness2;
        }
        if (tastiness3 > max_tastiness) {
            max_tastiness = tastiness3;
        }
        if (tastiness4 > max_tastiness) {
            max_tastiness = tastiness4;
        }

        
        printf("%d\n", max_tastiness);
    }

    return 0;
}
