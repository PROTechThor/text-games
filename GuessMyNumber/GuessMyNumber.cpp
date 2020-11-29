// Guess My Number

// Player tries to guess random number between 1 and 100

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int
main ()
{
// Seed the random number generator
  srand (static_cast < unsigned int >(time (0)));
// Maximum possible secret number
  const int MAX_NUM = 100;
// Get random number between 1-100
  int secret_num = (rand () % MAX_NUM) + 1;

// Welcome player to game
  cout << "\tHello. Welcome to Guess My Number game" << endl << endl;
  cout << "Guess my secret number between 1 and ";
  cout << MAX_NUM << "." << endl << endl;

  int tries = 0;		// number of times player's guesses
  int guess;			// player's current guess

//guessing loop
 do
    {
      cout << "Enter a numeric guess: ";
      cin >> guess;
      ++tries; // After each guess, increment tries
      
      if (guess < secret_num)
	{
	  cout << "Too low!" << endl << endl;
	}
	  if (guess > secret_num)
	{
	  cout << "Too high!" << endl << endl;
    }
 } while (guess != secret_num);

  
cout << endl;
cout << "You win! You guessed the right number in " << tries << " tries!";
cout << endl;
return 0;
}
