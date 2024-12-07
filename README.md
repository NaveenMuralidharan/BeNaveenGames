# BeNaveenGames

Created by Benjamin Lemon and Naveen Muralidharan on Sep 13, 2024.

## Table of Contents
- [Overview](#overview)
- [Technologies Used](#technologies-used)
- [Installation](#installation)
  - [Prerequisites](#prerequisites)
  - [Setting Up](#setting-up)
- [Usage](#usage)
- [Game Description](#game-description)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)
- [Future Improvements](#future-improvements)

## Overview

**BeNaveenGames** is a game C++ that showcase a variety of gameplay mechanics and algorithms. This repository contains a classic spacecraft and asteroids game with diverse themes and challenges, providing an enjoyable experience for players. We worked on different aspects of game development, such as input handling, graphics rendering, game loops, and more.

## Technologies Used

- **C++** - Core programming language used for the development of the games.
- **SFML (Simple and Fast Multimedia Library)** - Used for graphics, windowing, and handling game-related multimedia tasks.

## Installation

### Prerequisites

To build and run the games locally, you need to have the following installed:

1. **C++ Compiler** - GCC, Clang, or MSVC are recommended.
2. **SFML** - The SFML library must be installed to handle multimedia functions.

   You can install SFML via a package manager or directly from the [SFML official website](https://www.sfml-dev.org/).

   - **Linux**: `sudo apt-get install libsfml-dev`
   - **Windows**: Download and extract the SFML package from the SFML website.
   - **macOS**: `brew install sfml`

3. **CMake** - For building and managing the project.

### Setting Up

1. Clone the repository:

   ```bash
   git clone https://github.com/NaveenMuralidharan/BeNaveenGames.git
   cd BeNaveenGames
   ```
2. Navigate to the root of the repository and create a build directory:
   ```bash
   mkdir build
   cd build
   ``` 
3. Run CMake to configure the project:
   ```bash
     cmake ..
   ```
4. Compile the project:
   ```bash
     make
   ```
### Usage
Once the project is built, you can start playing the game:

Navigate to the build directory (or wherever the executable is located).
Run the game executable.
For example:
```bash
  ./game_name
```
### Game Description

Shoot asteroids using the SPACE key and move using directipons keys or awsd. If you let 10 asteroids through or get hit by an asteroid, it's game over. Rack up as many points as you can to compete with friends!

### Contributing

We welcome contributions to BeNaveenGames! If you'd like to contribute, please follow these steps:

- Fork the repository.
- Create a new branch (git checkout -b feature-name).
- Make your changes and commit them (git commit -am 'Add new feature').
- Push to the branch (git push origin feature-name).
- Open a pull request with a detailed explanation of your changes.

### Code style
- Ensure your code adheres to the project's coding style (consistent indentation, naming conventions, etc.).
- Write clear and concise commit messages.
- Prefer C++ best practices and efficient algorithms.

### License

This project is licensed under the MIT License - see the LICENSE file for details.

### Contact

For any questions or inquiries, please contact:

Author: Naveen Muralidharan
Email: naveenspec@gmail.com

### Future Improvements

- Add More Games: Introduce more genres, such as puzzle games, platformers, and strategy games.
- Improve UI: Enhance the user interface with better graphics, animations, and menus.
- Game Optimization: Improve performance, especially for large or resource-intensive games.
- Multiplayer Support: Add network functionality for multiplayer gameplay.
- Game Saving: Implement the ability to save game progress and resume later.
