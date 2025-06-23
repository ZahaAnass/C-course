# Rock Paper Scissors Game

A classic implementation of the Rock-Paper-Scissors game in C with a clean command-line interface.

## 🎮 Features

- Play against the computer in a best-of series
- Colorful terminal output for better visibility
- Input validation to prevent errors
- Clear game rules and instructions
- Option to play multiple rounds
- Shows detailed game results

## 🚀 Getting Started

### Prerequisites

- GCC (GNU Compiler Collection) or any C compiler
- A terminal that supports ANSI color codes (most modern terminals do)

### Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/ZahaAnass/rock-paper-scissors-c.git
   cd rock-paper-scissors-c
   ```

2. Compile the game:

   ```bash
   gcc -o main main.c
   ```

3. Run the game:

   ```bash
   ./main
   ```

## 🎮 How to Play

1. Run the game using the instructions above
2. When prompted, enter your choice:
   - `0` for Rock
   - `1` for Paper
   - `2` for Scissors
3. The computer will make its choice
4. See who wins the round!
5. Choose to play again or quit

## 🏆 Game Rules

- Rock crushes Scissors
- Paper covers Rock
- Scissors cut Paper
- Same choice results in a tie

## 📝 Example Gameplay

```bash

================================
    ROCK - PAPER - SCISSORS     
================================

Game Rules:
- Rock crushes Scissors
- Paper covers Rock
- Scissors cut Paper
- Same choice results in a tie

=== New Game ===

Enter your choice (0=Rock, 1=Paper, 2=Scissors): 1

You chose: Paper
Computer chose: Rock

You win! Paper covers Rock!

Play again? (y/n): n

Thanks for playing! Goodbye!
```

## 🛠️ Development

### Project Structure

- `main.c` - Contains all game logic and user interface
- `README.md` - This documentation file

### Building and Running

```bash
gcc -o main main.c
./main
```

## 🤝 Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🙏 Acknowledgments

- Thanks to all open-source contributors who have inspired this project
- Built using C
