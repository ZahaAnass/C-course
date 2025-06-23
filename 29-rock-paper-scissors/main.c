#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>

// Game constants
#define ROCK 0
#define PAPER 1
#define SCISSORS 2
#define CHOICES 3

// Function prototypes
int get_computer_choice();
int get_user_choice();
void print_choice(int choice);
void print_winner(int user_choice, int computer_choice);
void clear_input_buffer();
void print_banner();
void print_rules();

int main() {
    // Initialize random number generator
    srand(time(NULL));
    
    // Game variables
    int user_choice, computer_choice;
    char play_again;
    
    // Print game banner
    print_banner();
    print_rules();
    
    // Main game loop
    do {
        printf("\n=== New Game ===\n");
        
        // Get choices
        user_choice = get_user_choice();
        computer_choice = get_computer_choice();
        
        // Display choices
        printf("\nYou chose: ");
        print_choice(user_choice);
        printf("Computer chose: ");
        print_choice(computer_choice);
        
        // Determine and display winner
        print_winner(user_choice, computer_choice);
        
        // Ask to play again
        printf("\nPlay again? (y/n): ");
        scanf(" %c", &play_again);
        clear_input_buffer();
        
    } while (tolower(play_again) == 'y');
    
    printf("\nThanks for playing! Goodbye!\n");
    return 0;
}

/**
 * Gets a random choice for the computer (0-2)
 */
int get_computer_choice() {
    return rand() % CHOICES;
}

/**
 * Gets and validates the user's choice
 */
int get_user_choice() {
    int choice;
    bool valid_input = false;
    
    do {
        printf("\nEnter your choice (0=Rock, 1=Paper, 2=Scissors): ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            clear_input_buffer();
            continue;
        }
        
        if (choice < 0 || choice >= CHOICES) {
            printf("Please enter a number between 0 and %d.\n", CHOICES - 1);
        } else {
            valid_input = true;
        }
        
        clear_input_buffer();
    } while (!valid_input);
    
    return choice;
}

/**
 * Prints the name of the choice
 */
void print_choice(int choice) {
    switch (choice) {
        case ROCK:     printf("Rock\n"); break;
        case PAPER:    printf("Paper\n"); break;
        case SCISSORS: printf("Scissors\n"); break;
        default:       printf("Unknown choice\n");
    }
}

/**
 * Determines and prints the game result
 */
void print_winner(int user_choice, int computer_choice) {
    printf("\n");
    
    if (user_choice == computer_choice) {
        printf("It's a tie!\n");
    } else if ((user_choice == ROCK && computer_choice == SCISSORS) ||
                (user_choice == PAPER && computer_choice == ROCK) ||
                (user_choice == SCISSORS && computer_choice == PAPER)) {
        printf("\033[0;32mYou win!\033[0m ");
        switch (user_choice) {
            case ROCK:     printf("Rock crushes Scissors!\n"); break;
            case PAPER:    printf("Paper covers Rock!\n"); break;
            case SCISSORS: printf("Scissors cut Paper!\n"); break;
        }
    } else {
        printf("\033[0;31mComputer wins!\033[0m ");
        switch (computer_choice) {
            case ROCK:     printf("Rock crushes Scissors!\n"); break;
            case PAPER:    printf("Paper covers Rock!\n"); break;
            case SCISSORS: printf("Scissors cut Paper!\n"); break;
        }
    }
}

/**
 * Clears the input buffer
 */
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

/**
 * Prints the game banner
 */
void print_banner() {
    printf("\033[1;34m"); // Blue color
    printf("================================\n");
    printf("    ROCK - PAPER - SCISSORS     \n");
    printf("================================\n\n");
    printf("\033[0m"); // Reset color
}

/**
 * Prints the game rules
 */
void print_rules() {
    printf("Game Rules:\n");
    printf("- Rock crushes Scissors\n");
    printf("- Paper covers Rock\n");
    printf("- Scissors cut Paper\n");
    printf("- Same choice results in a tie\n\n");
}
