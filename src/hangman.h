#pragma once
#include <set>
#include <string>

class Hangman {
public:
    static const int MAX_WRONG = 6;

    explicit Hangman(std::string word) : word_(std::move(word)) {}

    bool guess(char letter);      // true if the letter is in the word
    std::string masked() const;   // e.g. "p _ t _ o _"
    bool won() const;
    bool lost() const { return wrong_ >= MAX_WRONG; }
    int wrongGuesses() const { return wrong_; }
    const std::string& word() const { return word_; }

private:
    std::string word_;
    std::set<char> guessed_;
    int wrong_ = 0;
};

void playHangman();
