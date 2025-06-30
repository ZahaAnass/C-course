# Digital Clock in C

A simple yet efficient digital clock implementation in C that displays the current time in HH:MM:SS format. This project demonstrates basic C programming concepts including time handling, modular code structure, and Makefile usage.

## Features

- Displays current time in 24-hour format (HH:MM:SS)
- Updates every second in the terminal
- Clean, modular code structure
- Simple build system using Make
- Cross-platform compatibility (Unix-like systems)

## Prerequisites

- GCC (GNU Compiler Collection)
- Make
- Unix-like operating system (Linux, macOS, WSL on Windows)

## Project Structure

``` bash
dijital-clock/
├── include/
│   └── clock.h         # Header file with function declarations
├── src/
│   ├── clock.c         # Clock implementation
│   └── main.c          # Main program entry point
├── Makefile            # Build configuration
└── README.md           # This file
```

## Building the Project

1. Clone the repository:

   ```bash
   git clone <repository-url>
   cd 48-dijital-clock
   ```

2. Build the project:

   ```bash
   make
   ```

## Running the Clock

1. Run the compiled binary:

   ```bash
   ./digital_clock
   ```

2. The clock will start displaying the current time in the terminal.

3. To stop the clock, press `Ctrl+C`.

## How It Works

The digital clock works by:

1. Getting the current time using `time()` function
2. Converting it to local time using `localtime()`
3. Formatting and displaying the time in HH:MM:SS format
4. Updating the display every second using `sleep(1)`

## Code Organization

- `main.c`: Contains the entry point and basic program flow
- `clock.c`: Implements the core clock functionality
- `clock.h`: Header file with function declarations
- `Makefile`: Handles the build process

## Customization

You can customize the clock by:

- Modifying the display format in `clock.c`
- Changing the update interval (currently 1 second)
- Adding features like date display or 12-hour format

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

## Author

Anass Zaha  
https://github.com/ZahaAnass
