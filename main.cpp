
#include "GroceryTracker.h"
#include <exception>
#include <iostream>
#include <sstream>
#include <string>

int main() {
    try {
        GroceryTracker tracker("CS210_Project_Three_Input_File.txt");

        // Create the backup file.
        tracker.saveBackup("frequency.dat");

        std::string line;

        while (true) {
            std::cout << "\nCORNER GROCER\n"
                << "1. Find item frequency\n"
                << "2. Display all frequencies\n"
                << "3. Display histogram\n"
                << "4. Exit\n"
                << "Choose an option (1-4): ";

            if (!std::getline(std::cin, line)) {
                break;
            }

            std::istringstream selection(line);
            int option = 0;
            char extra;

            if (!(selection >> option) ||
                (selection >> extra) ||
                option < 1 || option > 4) {
                std::cout << "Invalid selection. Enter 1-4.\n";
                continue;
            }

            if (option == 4) {
                std::cout << "Thank you for using Corner Grocer!\n";
                break;
            }

            if (option == 1) {
                std::cout << "Enter an item: ";

                if (!std::getline(std::cin, line)) {
                    break;
                }

                std::istringstream words(line);
                std::string item;
                std::string extraWord;

                if (!(words >> item) || (words >> extraWord)) {
                    std::cout << "Enter one item name.\n";
                    continue;
                }

                std::cout << item << " frequency: "
                    << tracker.getFrequency(item) << '\n';
            }
            else if (option == 2) {
                std::cout << "\nITEM FREQUENCIES\n";
                tracker.printFrequencies(std::cout);
            }
            else if (option == 3) {
                std::cout << "\nPURCHASE HISTOGRAM\n";
                tracker.printHistogram(std::cout);
            }
        }

        return 0;
    }
    catch (const std::exception& error) {
        std::cerr << "Error: " << error.what() << '\n';
        return 1;
    }
}
