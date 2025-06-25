# Compiler settings
CC = gcc
CFLAGS = -Wall -Wextra -g -Iinclude
LDFLAGS = -lm

# Source files
SRC_DIR = src
SRCS = $(wildcard $(SRC_DIR)/*.c)
OBJS = $(SRCS:.c=.o) main.o
TARGET = gestion_conge

# Default target
all: $(TARGET)

# Link all object files to create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

# Compile main.c
main.o: main.c
	$(CC) $(CFLAGS) -c $< -o $@

# Compile source files in src/
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean