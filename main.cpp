#include <iostream>

using namespace std;

int main() {

  // Ask the user to enter their name.
  cout << "What is your name: ";

  // Set their name into a variable called "name" and make sure that it is all lowercase.
  string name;
  cin >> tolower(name);

  // Using an if statement, determine the appropriate response depending on the users name. Capitalize the first letter for properness.
  if(name = "brenden") {
    cout << "Your name is " << toupper(name[0]) + substr(1) << ", and you are the owner of this program.";
  }
  else
  
} 