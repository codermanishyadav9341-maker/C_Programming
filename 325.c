#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;
    char *choices[] = {"Rock", "Paper", "Scissors"};

    printf("Welcome to Rock, Paper, Scissors Game!\n");
    printf("Choose:\n");
    printf("0 = Rock\n1 = Paper\n2 = Scissors\n");

    // Get user choice
    printf("Enter your choice (0/1/2): ");
    scanf("%d", &userChoice);

    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid choice! Please run the program again.\n");
        return 0;
    }

    // Seed random number and get computer choice
    srand(time(0));
    computerChoice = rand() % 3;

    printf("You chose: %s\n", choices[userChoice]);
    printf("Computer chose: %s\n", choices[computerChoice]);

    // Determine winner
    if (userChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((userChoice == 0 && computerChoice == 2) ||
               (userChoice == 1 && computerChoice == 0) ||
               (userChoice == 2 && computerChoice == 1)) {
        printf("🎉 You win!\n");
    } else {
        printf("💻 Computer wins!\n");
    }


    return 0;
}