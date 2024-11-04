#include <stdio.h>

int main() {
    int N; 
    scanf("%d", &N);

    int score1 = 0, score2 = 0; 
    int maxLead = 0; 
    int winner = 0; 

    for (int i = 0; i < N; i++) {
        int Si, Ti;
        scanf("%d %d", &Si, &Ti);

        score1 += Si;
        score2 += Ti;
       
        int lead, currentLeader;
        if (score1 > score2) {
            lead = score1 - score2;
            currentLeader = 1; 
        } else {
            lead = score2 - score1;
            currentLeader = 2; 
        }

        if (lead > maxLead) {
            maxLead = lead;
            winner = currentLeader; 
        }
    }

    printf("%d %d\n", winner, maxLead);
    return 0;
}
