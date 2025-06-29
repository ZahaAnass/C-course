#ifndef QUIZ_H
#define QUIZ_H

#define MAX_QUESTIONS 50
#define MAX_QUESTION_LEN 200
#define MAX_OPTIONS 4
#define MAX_OPTION_LEN 100

typedef struct {
    char question[MAX_QUESTION_LEN];
    char options[MAX_OPTIONS][MAX_OPTION_LEN];
    char correct_answer;
} Question;

int question_to_load();
void load_questions(const char* filename, Question* questions, int question_to_load, int* count);
void display_question(Question q, int question_num);
int check_answer(Question q, char answer);
void run_quiz(Question* questions, int count);
void display_score(int score, int total);

#endif
