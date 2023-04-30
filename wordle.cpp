#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string words[] = {"House", "Stamp", "Cough"};
    std::string guess;
    for (int i = 0; i < 1; i++)      //nested for loop, then nested if statements
    {
        if (isalpha(words[0][i]) && i < 5){
            std::cout << "# # # # #";
            std::cout << "Guess the 5 letter word: \n";
            std::cin >> guess;
            i++;
            if(guess == words[i]){
                std::cout << words[i];
                std::cout << "You win!";
                for (int j = 0; j < 6; j++){
                    if (guess[j] == words[i][j]){
                        std::cout << "(" << guess[j] << ")";
                    }
                }
            }
        }
    }
}