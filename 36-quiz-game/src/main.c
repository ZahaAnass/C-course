#include <stdio.h>
#include "../include/quiz.h"

int main() {
    Question questions[MAX_QUESTIONS];
    int question_count = 0;
    int num_to_load = question_to_load();

    load_questions("./data/questions.txt", questions, num_to_load, &question_count);
    
    if (question_count == 0) {
        printf("No questions loaded. Please check the questions file.\n");
        return 1;
    }

    run_quiz(questions, question_count);
    return 0;
}
