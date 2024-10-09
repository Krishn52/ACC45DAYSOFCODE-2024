#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, X; 
        scanf("%d %d", &N, &X);

        int Y = N - X; 

        int min_flips;
        if (X < Y) {
            min_flips = X; 
        } else {
            min_flips = Y; 
        }

        printf("%d\n", min_flips);
    }

    return 0;
}
