# About the Project

This project is a CLI (Command Line Interface) developed apply filters to movies. It was created as part of Assignment 1 for the AGT-001 at UDESC.


## How to Compile and Run

1. Make sure `gcc` is installed on your system. To check, run the command:

  ```bash
  gcc --version
  ```

2. If `gcc` is not installed, follow the installation instructions specific to your operating system.

3. To compile and run the program, use the following command in the terminal:

  ```bash
  make runmain
  ```

4. In the terminal, you can display a media table and answer queries related to type, category, genre, and provider.

5. After answering the questions, the system will display the media that best matches your preferences.


## Project Structure

- ***main.c***: The entry point of the application, responsible for initializing the program and handling user interactions.
- ***utils/\****: Contains helper functions and utilities used throughout the project, such as input validation and data processing.
- ***errors/\****: Includes error-handling modules to manage and report issues during program execution.
- ***Makefile***: Automates the build process, providing commands to compile the program, clean up generated files, and run the application efficiently.
