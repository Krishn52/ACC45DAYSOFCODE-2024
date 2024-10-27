#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    while (T--) {
        int N; 
        scanf("%d", &N);
        
        int count_START38 = 0; 
        int count_LTIME108 = 0; 
        char contest_code[10]; 

        for (int i = 0; i < N; i++) {
            scanf("%s", contest_code);
            
            if (contest_code[0] == 'S') {
                count_START38++;
            } else if (contest_code[0] == 'L') {
                count_LTIME108++;
            }
        }

        printf("%d %d\n", count_START38, count_LTIME108);
    }

    return 0;
}
