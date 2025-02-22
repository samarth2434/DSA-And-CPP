#include <iostream>
#include <cstring>  // For strlen()

using namespace std;

bool checkPalindrome(char word[]) {
    int i = 0;
    int n = strlen(word);
    int j = n - 1;

    while (i < j) {
        if (word[i] != word[j]) {
            return false; // Not a palindrome
        }
        i++;
        j--;
    }
    return true; // Palindrome
}

int main() {
    char word[100];
    cout << "Enter a word: ";
    cin >> word;

    if (checkPalindrome(word)) {
        cout << "The word is a palindrome." << endl;
    } else {
        cout << "The word is not a palindrome." << endl;
    }

    return 0;
}
