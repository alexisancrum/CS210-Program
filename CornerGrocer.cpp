#include "GroceryTracker.h"
#include <cctype>
#include <fstream>
#include <iomanip>
#include <ostream>
#include <stdexcept>

std::string GroceryTracker::normalize(const std::string& text) {
    std::string result;
    for (unsigned char ch : text) {
        result += static_cast<char>(std::tolower(ch));
    }
    return result;
}

GroceryTracker::GroceryTracker(const std::string& inputPath) {
    std::ifstream input(inputPath);
    if (!input) {
        throw std::runtime_error("Cannot open input file: " + inputPath);
    }
    std::string item;
    // Each whitespace-separated word represents one purchase.
    while (input >> item) {
        item = normalize(item);
        item[0] = static_cast<char>(std::toupper(static_cast<unsigned char>(item[0])));
        ++itemCounts[item];
    }
    if (input.bad()) {
        throw std::runtime_error("Error reading input file.");
    }
    if (itemCounts.empty()) {
        throw std::runtime_error("Input file contains no purchases.");
    }
}

void GroceryTracker::saveBackup(const std::string& outputPath) const {
    std::ofstream output(outputPath);
    if (!output) {
        throw std::runtime_error("Cannot create backup: " + outputPath);
    }
    for (const auto& entry : itemCounts) {
        output << entry.first << ' ' << entry.second << '\n';
    }
    output.close();
    if (!output) {
        throw std::runtime_error("Error writing backup file.");
    }
}

int GroceryTracker::getFrequency(const std::string& item) const {
    std::string key = normalize(item);
    if (key.empty()) return 0;
    key[0] = static_cast<char>(std::toupper(static_cast<unsigned char>(key[0])));
    const auto found = itemCounts.find(key);
    return found == itemCounts.end() ? 0 : found->second;
}

void GroceryTracker::printFrequencies(std::ostream& out) const {
    for (const auto& entry : itemCounts) {
        out << entry.first << ' ' << entry.second << '\n';
    }
}

void GroceryTracker::printHistogram(std::ostream& out) const {
    for (const auto& entry : itemCounts) {
        out << std::left << std::setw(14) << entry.first
            << std::string(entry.second, '*') << '\n';
    }
}
