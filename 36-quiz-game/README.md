# 📚 C Quiz Game

A lightweight, command-line quiz application written in C that challenges your knowledge across various topics including science, geography, history, and general knowledge.

## 🎮 Features

- Multiple-choice questions with immediate feedback
- Customizable quiz length (1-50 questions)
- Real-time score tracking with percentage
- Clean, modular C codebase
- Easy-to-edit question bank
- Case-insensitive answer input
- Cross-platform compatibility

## 🛠️ Requirements

- GCC (GNU Compiler Collection) or equivalent C compiler
- Make
- Unix-like environment (Linux, macOS, or WSL for Windows)

## 🚀 Quick Start

1. **Clone the repository**:

   ```bash
   git clone git@github.com:ZahaAnass/Quiz-Game-C.git
   cd Quiz-Game-C
   ```

2. **Build the project**:

   ```bash
   make
   ```

3. **Run the game**:

   ```bash
   ./quiz_game
   ```

## 🎯 How to Play

1. **Start the Game**:

   ```bash
   ./quiz_game
   ```

2. **Choose Quiz Length**:

   ```bash
   How many questions would you like to answer? (1-50, 0 for all): 5
   ```

3. **Answer Questions**:

   ```bash
   Question 1: What is the capital of France?
   A. London
   B. Berlin
   C. Paris
   D. Madrid

   Your answer: C
   ✅ Correct!
   ```

4. **View Results**:

   ```bash
   === Quiz Complete! ===
   Your score: 4/5 (80.0%)
   ```

## 📂 Project Structure

```bash
quiz-game/
├── include/           # Header files
│   └── quiz.h        # Game structures and function declarations
├── src/              # Source files
│   ├── main.c        # Entry point and game flow
│   └── quiz.c        # Game logic implementation
├── data/             # Question bank
│   └── questions.txt # Questions and answers
├── Makefile          # Build configuration
└── README.md         # Documentation
```

## ✏️ Adding Questions

Edit `data/questions.txt` using this format:

1. Question text
2. Option A
3. Option B
4. Option C
5. Option D
6. Correct answer (A, B, C, or D)
7. Empty line between questions

Example:

```bash
What is 2+2?
A. 3
B. 4
C. 5
D. 6
B

What is the capital of Japan?
A. Beijing
B. Seoul
C. Tokyo
D. Bangkok
C
```

## 🛠️ Customization

- Adjust `MAX_QUESTIONS` in `include/quiz.h` to change the maximum number of questions
- Modify `questions.txt` to add or edit questions
- Update the Makefile for custom build options

## 🤝 Contributing

Contributions are welcome! Please follow these steps:

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## 🙏 Acknowledgments

- Built as an educational C programming project
- Questions compiled from general knowledge
- Inspired by classic quiz games

---

<div align="center">
Made by ZahaAnass
</div>