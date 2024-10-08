#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y); 

        if (X == Y) {
            
            printf("0\n");
        } else {
            
            int distance;
            if (X < Y) {
                distance = Y - X; 
            } else {
                distance = X - Y; 
            }
            
            int time = distance / 1;
            printf("%d\n", time);
        }
    }

    return 0;
}
