CC = gcc
CFLAGS = -Wall -Iinclude
TARGET = quiz_game
SRC = src/quiz.c src/main.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean