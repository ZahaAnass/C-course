#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>
#include "../include/clock.h"

void display_clock() {
    time_t rawtime;
    time(&rawtime);
    struct tm *pTime = localtime(&rawtime);
    printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
    fflush(stdout);
}

void run_clock() {
    while (true) {
        display_clock();
        sleep(1);
    }
}