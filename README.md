# Dictionary Application

## Overview
This Dictionary Application is a simple, console-based C++ program that allows users to search for the definitions of English words. The application loads a dictionary from a text file, where each entry consists of a word, its type (noun, verb, adjective, etc.), and its definition. Users can search for words in an interactive menu-driven interface.

## Features
- **Load Dictionary**: Automatically loads words, their types, and definitions from a specified dictionary file at startup.
- **Search**: Allows users to search for words. If the word exists in the dictionary, its details are displayed.
- **Case-Insensitive Search**: The search functionality is case-insensitive, enhancing user experience and search flexibility.
- **Interactive Menu**: Users can choose to search for words or exit the application through a simple main menu.

## Getting Started

### Prerequisites
- A C++ compiler (e.g., GCC, Clang, MSVC)
- [Make](https://www.gnu.org/software/make/) (optional, for building the project using a Makefile)

### Installation
Clone this repository to your local machine using:

```bash
git clone https://github.com/CoMiKx/Dictionary-Application.git
```

Navigate to the project directory:

```bash
cd Dictionary-Application
```

### Building the Project
To compile the project, run the following command in the terminal:

```bash
g++ -o dictionary_app Example.cpp
```

If you have a `Makefile` included in the project, you can simply run:

```bash
make
```

### Running the Application
After compilation, you can start the application by running:

```bash
./dictionary_app
```

## Usage
1. When the application starts, it will load the dictionary from the file `dictionary_2024S1.txt`.
2. The main menu will be displayed. Enter `1` to search for a word or `2` to exit the application.
3. If you choose to search for a word, enter the word when prompted and press Enter. The application will display the word's type and definition if it exists in the dictionary.
4. To perform another search or to exit, follow the prompts provided by the application's main menu.

## Contributing
Contributions to enhance the Dictionary Application are welcome. Before contributing, please ensure you have discussed the changes you wish to make via issues.

## License
This project is licensed under the MIT License - see the [LICENSE](https://github.com/CoMiKx/Dictionary-Application/blob/master/LICENSE) file for details.

## Acknowledgments
- The dictionary data used in this application is sourced from the GCIDE project.
- Thanks to all contributors who help in improving and maintaining this project.