#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;
using namespace std;

int main()
{
    
// Welcoming the player to the game and explain game
cout << "\t\t\tWelcome to Word Scramble!";
cout << endl << endl;
cout << "To win, unscramble the given letters to make a word.";
cout << endl;
cout << "Enter 'exit' to exit the game.";
cout << endl << endl;

srand(static_cast<unsigned int>(time(0)));

// list of possible words to scramble

const int NUMBER_OF_WORDS = 9;
const string WORDS_LIST[NUMBER_OF_WORDS] =
{
"food",
"scramble",
"baby",
"lovers",
"nostril",
"crypt",
"movie",
"beauty",
"blogger"
};

// Random index number
int choice = (rand() % NUMBER_OF_WORDS);

// Word player must guess
string secret_word = WORDS_LIST[choice];

// Scrambled version of secret word
string scrambled = secret_word;

// Number of characters in scrambled
size_t length = scrambled.size();

// Scrambled up letters in scrambled
for (size_t i=0; i<length; ++i)

{
    
// Scramble letters by swapping letter at index i with letter at random index
size_t randomIndex = (rand() % length);
char scrambled_index = scrambled[i];
scrambled[i] = scrambled[randomIndex];
scrambled[randomIndex] = scrambled_index;
}

// Show scrambled word
cout << "The scrambled word is: " << scrambled;

// player's guess
string player_guess;
while ((player_guess != secret_word) && (player_guess != "exit")) 
{
cout << endl << endl << "Your guess: ";
cin >> player_guess;

if ((player_guess != secret_word) && (player_guess != "exit"))
{
cout << "Sorry, wrong guess";
}
} ;

if (player_guess == secret_word)
cout << endl << "Good job! You have guessed the word!" << endl;
return 0;
}
