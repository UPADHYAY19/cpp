#include <iostream>
#include <vector>
#include <string>
using namespace std;

std::vector<int> findWordsContainingChar(const::vector<std::string>& words, char x) {
  vector<int> indices;

    for (int i = 0; i < words.size(); ++i) {
        if (words[i].find(x) !=string::npos) {
            indices.push_back(i);
        }
    }

    return indices;
} 

int main() {
  vector<std::string> words = {"hello", "world", "openai", "language", "model"};
    char x = 'o';

  vector<int> result = findWordsContainingChar(words, x);

  cout << "Indices of words containing '" << x << "': ";
    for (int idx : result) {
      cout << idx << " ";
    }
  cout <<::endl;

    return 0;
}
