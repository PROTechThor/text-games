#include <iostream>
#include <string>
using namespace std;

int main ()
{

  const int GOLD_COINS = 800;  //Define gold coins found in the treasure hunt
  string captain;		//declare captain name
  int pirates;			//number of pirates that begin journey
  int pirates_dead;		//number of pirates who died

// Getting values from the player

  cout << "\tWelcome to Lost Pirates" << endl << endl;
  cout <<
    "\tA number of pirates are stuck at sea, returning from a treasure hunt."
    << endl << endl;
  cout << "For a personalized adventure, enter the following:";
  cout << endl << endl;
  cout << "Enter your name: ";
  cin >> captain;
  cout << "Enter a positive whole number: ";
  cin >> pirates;
  cout << "Enter a positive whole number, less than the previous number: ";
  cin >> pirates_dead;

// Getting new values
  int survivors = pirates - pirates_dead;

  // Getting the remaining coins after the total gold coins are shared equally between the survivors
  int extra_gold_coins = GOLD_COINS % survivors;

// The story
  cout << endl;
  cout << "A group of pirates are returning from a treasure hunt. " << endl;
  cout << "They found " << GOLD_COINS << " gold coins. " << endl;
  cout << "On the way home, their ship is caught by a stormy sea." << endl;
  cout << "The captain, " << captain << " is leading the group of "
    << pirates;
  cout << " pirates." << endl;
  cout << "They stormy sea rocked their ship back and forth, throwing "
    << pirates_dead << " overboard and they died." << endl;
  cout << " Only " << survivors << " pirates survived the storm." << endl;
  cout << "The survivors split the gold coins equally and" << endl;
  cout << captain << " kept the extra "
    << extra_gold_coins << " gold coin(s)";
  cout << " to keep it fair." << endl;
  return 0;
}
