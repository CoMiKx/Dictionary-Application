#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

// Define the Word struct here
struct Word {
    std::string name;
    std::string type;
    std::string definition;
};

// Function declarations
void loadDictionary(const std::string& filename, std::vector<Word>& dictionary);
void searchWord(const std::vector<Word>& dictionary);
void displayMainMenu();

int main() {
    std::vector<Word> dictionary;
    std::string filename = "dictionary_2024S1.txt"; // Default dictionary file

    std::cout << "Welcome to the Dictionary Application!" << std::endl;
    loadDictionary(filename, dictionary);

    bool running = true;
    while (running) {
        displayMainMenu();
        std::string choice;
        std::getline(std::cin, choice);

        switch (choice[0]) {
            case '1':
                searchWord(dictionary);
                break;
            case '2':
                std::cout << "Exiting application. Goodbye!" << std::endl;
                running = false;
                break;
            default:
                std::cout << "Invalid option. Please try again." << std::endl;
        }
    }

    return 0;
}

void loadDictionary(const std::string& filename, std::vector<Word>& dictionary) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Failed to open the dictionary file: " << filename << std::endl;
        std::exit(1); // Exit with an error code
    }

    Word word;
    std::string line;
    while (getline(file, line)) {
        if (line.find("Type: ") == 0) {
            word.type = line.substr(6);
        } else if (line.find("Definition: ") == 0) {
            word.definition = line.substr(12);
        } else if (line.find("Word: ") == 0) {
            word.name = line.substr(6);
            dictionary.push_back(word); // Add the word to the dictionary
            word = Word(); // Reset for the next word
        }
    }
    file.close();
    std::cout << "Dictionary loaded successfully!" << std::endl;
}

void searchWord(const std::vector<Word>& dictionary) {
    std::string input;
    std::cout << "\nEnter a word to search for: ";
    std::getline(std::cin, input);

    std::transform(input.begin(), input.end(), input.begin(), ::tolower);

    bool found = false;
    for (const auto& word : dictionary) {
        if (word.name == input) {
            std::cout << "\nWord: " << word.name << "\nType: " << word.type << "\nDefinition: " << word.definition << "\n" << std::endl;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Word not found.\n" << std::endl;
    }
}

void displayMainMenu() {
    std::cout << "Main Menu:" << std::endl;
    std::cout << "1. Search for a word" << std::endl;
    std::cout << "2. Exit" << std::endl;
    std::cout << "Enter your choice (1-2): ";
}
