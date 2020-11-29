#include <iostream>
#include <string>
using namespace std;

int prompt_num (const string & prompt)
{
  int num;
  cout << prompt;
  cin >> num;
  return num;
}

string prompt_text (const string & prompt)
{
  string text;
  cout << prompt;
  cin >> text;
  return text;
}


// Show personalized story
void write_story (const string & aName, const string & aNoun, int aNumber,
	     const string & aBodyPart, const string & aVerb)
{
  cout << "A woman named ";
  cout << aName;
  cout << " loved cooking. " << endl;
  cout << "One day, when she was cooking";
  cout << aNoun;
  cout << ", a friend of hers invited her out." << endl;
  cout << "She took ";
  cout << aNumber;
  cout << " minutes to take a bath." << endl;
  cout << ", She quickly applied makeup on her";
  cout << aBodyPart << "." << endl;
  cout << "When she was done, she ";
  cout << aVerb;
  cout << " out." << endl;
}


int main ()
{
  cout << endl << "Welcome to this Mad Libs game" << endl;
  cout << endl << "Enter the following to create a personalized story" << endl;
  int enter_num = prompt_num ("Enter a number: ");
  string enter_body = prompt_text ("Enter a body part: ");
  string enter_noun = prompt_text ("Enter a noun: ");
  string enter_name = prompt_text ("Enter a name: ");
  string enter_verb = prompt_text ("Enter a verb: ");

  write_story (enter_name, enter_noun, enter_num, enter_body, enter_verb);
  return 0;
}
