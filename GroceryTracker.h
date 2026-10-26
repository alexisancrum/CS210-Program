#ifndef GROCERY_TRACKER_H
#define GROCERY_TRACKER_H
#include <iosfwd>
#include <map>
#include <string>

// Owns purchase counts and provides read-only reports.
class GroceryTracker {
public:
    explicit GroceryTracker(const std::string& inputPath);
    void saveBackup(const std::string& outputPath) const;
    int getFrequency(const std::string& item) const;
    void printFrequencies(std::ostream& out) const;
    void printHistogram(std::ostream& out) const;
private:
    std::map<std::string, int> itemCounts;
    static std::string normalize(const std::string& text);
};
#endif
