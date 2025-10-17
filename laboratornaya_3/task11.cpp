#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string replace_all_can(string text, const string& new_word) {
    size_t z = 0;
    string lower_text = text;
    for (char& c : lower_text)
        c = tolower(c);

    while ((z = lower_text.find("can", z)) != string::npos) {
        bool left_ok = (z == 0 || !isalpha(lower_text[z - 1]));
        bool right_ok = (z + 3 >= lower_text.size() || !isalpha(lower_text[z + 3]));

        if (left_ok && right_ok) {
            text.replace(z, 3, new_word);
            lower_text.replace(z, 3, new_word);
            z += new_word.size();
        }
        else {
            z += 3;
        }
    }
    return text;
}

void task11() {
    string sentence = "Can you can a can as a canner can can a can?";
    string new_word;
    cin >> new_word;

    string result = replace_all_can(sentence, new_word);
    cout << result;
}