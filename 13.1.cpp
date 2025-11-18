#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> words;
    string word;
    
    cout << "Введите слова (для завершения введите 'end'):" << endl;
    
    while (cin >> word && word != "end") {
        words.push_back(word);
    }
    
    if (words.empty()) {
        cout << "Не введено ни одного слова!" << endl;
        return 0;
    }
    
    int letter_count[26] = {0};
    
    for (const string& w : words) {
        bool present[26] = {false};
        for (char c : w) {
            if (c >= 'a' && c <= 'z') present[c - 'a'] = true;
        }
        for (int i = 0; i < 26; ++i) {
            if (present[i]) letter_count[i]++;
        }
    }
    
    string result;
    for (int i = 0; i < 26; ++i) {
        if (letter_count[i] == words.size()) {
            result += char('a' + i);
        }
    }
    
    cout << result << endl;
    
    return 0;
}
