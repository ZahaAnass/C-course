#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "../include/quiz.h"

void load_questions(const char* filename, Question* questions, int question_to_load, int* count) {
    FILE* file = fopen(filename, "r");
    if (!file) {
        perror("Error opening questions file");
        *count = 0;
        return;
    }

    *count = 0;
    char line[256];
    
    // If question_to_load is 0 or negative, load all questions
    int max_questions = (question_to_load > 0) ? question_to_load : MAX_QUESTIONS;
    
    while (fgets(line, sizeof(line), file) && *count < max_questions) {
        if (strlen(line) < 2) continue;
        
        // Read question
        strncpy(questions[*count].question, line, MAX_QUESTION_LEN - 1);
        questions[*count].question[strcspn(questions[*count].question, "\n")] = 0;

        // Read options
        for (int i = 0; i < MAX_OPTIONS; i++) {
            if (!fgets(line, sizeof(line), file)) break;
            strncpy(questions[*count].options[i], line, MAX_OPTION_LEN - 1);
            questions[*count].options[i][strcspn(questions[*count].options[i], "\n")] = 0;
        }

        // Read correct answer
        if (fgets(line, sizeof(line), file)) {
            questions[*count].correct_answer = toupper(line[0]);
        }

        (*count)++;
    }
    fclose(file);
}

void display_question(Question q, int question_num) {
    printf("\nQuestion %d: %s\n", question_num + 1, q.question);
    for (int i = 0; i < MAX_OPTIONS; i++) {
        printf("%s\n", q.options[i]);
    }
}

int check_answer(Question q, char answer) {
    return (toupper(answer) == q.correct_answer);
}

void run_quiz(Question* questions, int count) {
    int score = 0;
    char answer;

    printf("\n=== Welcome to the Quiz Game! ===\n");
    printf("Answer with the letter of your choice (A, B, C, or D).\n\n");

    for (int i = 0; i < count; i++) {
        display_question(questions[i], i);
        printf("\nYour answer: ");
        scanf(" %c", &answer);
        
        if (check_answer(questions[i], answer)) {
            printf("✅ Correct!\n");
            score++;
        } else {
            printf("❌ Wrong! The correct answer was %c\n", questions[i].correct_answer);
        }
    }

    display_score(score, count);
}

void display_score(int score, int total) {
    printf("\n=== Quiz Complete! ===\n");
    printf("Your score: %d/%d (%.1f%%)\n", score, total, (float)score/total * 100);
}

int question_to_load() {
    int num;
    printf("How many questions would you like to answer? (1-50, 0 for all): ");
    while (1) {
        if (scanf("%d", &num) != 1) {
            // Clear invalid input
            while (getchar() != '\n');
            printf("Please enter a number between 1 and 50 (0 for all): ");
        } else if (num < 0 || num > 50) {
            printf("Please enter a number between 1 and 50 (0 for all): ");
        } else {
            break;
        }
    }
    // Clear the input buffer
    while (getchar() != '\n');
    return num;
}
