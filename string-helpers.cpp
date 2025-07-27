#include <iostream>
#include <string>
using namespace std;

string reverseString(const string& str) {
    return string(str.rbegin(), str.rend());
}

int countVowels(const string& str) {
    int count = 0;
    for (char c : str) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') count++;
    }
    return count;
}

int main() {
    string input = "ChatGPT Rocks";
    cout << "Reversed: " << reverseString(input) << endl;
    cout << "Vowels: " << countVowels(input) << endl;
    return 0;
}
