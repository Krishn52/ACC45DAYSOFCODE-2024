#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y);

        int attacks_normal = 0;
        int attacks_with_special = 0;

        attacks_normal = (H + X - 1) / X; 
        if (H > Y) {
            int remaining_health = H - Y;
            attacks_with_special = (remaining_health + X - 1) / X + 1; 
        } else {
            attacks_with_special = 1; 
        }

        int min_attacks = (attacks_normal < attacks_with_special) ? attacks_normal : attacks_with_special;

        printf("%d\n", min_attacks);
    }

    return 0;
}
