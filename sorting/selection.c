// You are given a list of cricket players with their names and total runs scored.
// Write a C program to arrange the players in descending order of runs scored using Selection Sort
// Input: Number of players, followed by each player’s name and runs.
// Output: Display the sorted list (runs in descending order).

#include <stdio.h>
#include <string.h>


struct Player {
    int runs;
    char name[100];
};


void descendingSelectionSort(struct Player players[], int n) {
    int i, j, maxIndex;
    struct Player temp;

    for (i = 0; i < n - 1; i++) {
        maxIndex = i;
        for (j = i + 1; j < n; j++) {
            if (players[j].runs > players[maxIndex].runs) {
                maxIndex = j;
            }
        }
        
        if (maxIndex != i) {
            temp = players[i];
            players[i] = players[maxIndex];
            players[maxIndex] = temp;
        }
    }
}

int main() {
    int n;

    printf("Enter the number of players to add: ");
    scanf("%d", &n);

    struct Player players[n];
    
    for (int index = 0; index < n; index++) {
        char name[100];
        int runs;

        printf("Enter name: ");
        scanf("%s", &players[index].name); 

        printf("Enter the number of runs to add: ");
        scanf("%d", &players[index].runs);
    }

    descendingSelectionSort(players, n);

    printf("\nPlayers sorted by runs in descending order:\n");
    for (int index = 0; index < n; index++) {
        printf("%s: %d runs\n", players[index].name, players[index].runs);
    }   
    return 0;
}