#include <iostream>
#include <sstream>
#include <vector>

class Solution {
public:
    std::string reverseWords(std::string s) {
        std::istringstream iss(s);
        std::vector<std::string> words;

        // Extract words from the input string
        while (iss >> s) {
            words.push_back(s);
        }

        // Reverse the order of words
        std::string reversed;
        for (auto it = words.rbegin(); it != words.rend(); ++it) {
            reversed += *it;
            if (it != words.rend() - 1) {
                reversed += " "; // Add a single space between words
            }
        }

        return reversed;
    }
};

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);

    Solution solution;
    std::string reversedString = solution.reverseWords(s);

    std::cout << "Reversed String: " << reversedString << std::endl;

    return 0;
}
