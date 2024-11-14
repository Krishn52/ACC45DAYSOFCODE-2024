#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    int time_spent = (Y / 2) + (X - Y);
    printf("%d\n", time_spent);
    
    return 0;
}
