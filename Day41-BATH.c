#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int X, Y;
        
        scanf("%d %d", &X, &Y);
        
        if (Y == 0) {
            printf("0\n");
        } else {
            int people = X / (2 * Y);
            printf("%d\n", people);
        }
    }
    
    return 0;
}
