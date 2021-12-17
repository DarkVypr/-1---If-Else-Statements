#include <iostream>
#include <string>

using namespace std;

int main() {
  int loop = 0;
  while(loop == 0) {

    // Ask the user to enter their name.
    cout << "What is your name: ";
  
    // Set their name into a variable called "name", and make the first letter uppercase.
    string name;
    cin >> name;
    name[0] = toupper(name[0]);
  
    // Using an if statement, determine the appropriate response depending on the users name.
    if(name == "Brenden") {
      cout << "Your name is " << name << ", and you ARE the owner of this program. ✅\n";
    }
    else {
      cout << "Your name is " << name << ", and you are NOT the owner of this program. ⛔\n";
    }
  }
} 