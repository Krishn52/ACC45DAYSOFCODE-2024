#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);
    
    while (T--) {
        int X, Y; 
        scanf("%d %d", &X, &Y);
        
        
        int pointA = (500 - 2 * X) + (1000 - 4 * (X + Y));
        
        
        int pointB = (1000 - 4 * Y) + (500 - 2 * (Y + X));
        
        
        int maxpoint;
        if (pointA > pointB) {
            maxpoint = pointA;
        } else {
            maxpoint = pointB;
        }
        
       
        printf("%d\n", maxpoint);
    }
    
    return 0;
}
