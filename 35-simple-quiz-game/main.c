#include <stdio.h>
#include <ctype.h>

int main ()
{   
    // QUIZ GAME

    char questions[][100] = {"What is the largest planet in the solar system?",
                            "What is the hottest planet in the solar system?",
                            "What planet has the most moons?",
                            "Is the Earth flat?"}; // Just a Joke

    char options [][100] = {"A. Jupiter\nB. Saturn\nC. Earth\nD. Mars",
                            "A. Earth\nB. Venus\nC. Mars\nD. Jupiter",
                            "A. Earth\nB. Jupiter\nC. Mars\nD. Saturn",
                            "A. Yes\nB. No\nC. Maybe\nD. Sometimes"}; // Just a Joke

    char answersKey[] = {'A', 'B', 'D', 'B'};

    int questionCount = sizeof(questions)/sizeof(questions[0]);

    char guess = '\0';
    int score = 0;

    printf("*** QUIZ GAME ***\n");
    for(int i = 0; i < questionCount; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);
        printf("\nEnter your answer: ");
        scanf(" %c", &guess);

        guess = toupper(guess);

        if(guess == answersKey[i]){
            printf("Correct!\n");
            score++;
        }else{
            printf("Wrong!\n");
        }
    }

    printf("\nYour final score is: %d/%d\n", score, questionCount);

    return 0;
}