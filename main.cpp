#include <iostream>
#include <istream>

using namespace std;

int main() {
    // Declared variables
    char user_entry = ' ';

    // User input
    cout << "Enter Any Character: ";
    cin >> user_entry;

    // Check if it's an alphabet letter
    if ((user_entry >= 'a' && user_entry <= 'z') || (user_entry >= 'A' && user_entry <= 'Z') || (user_entry == 'Ñ') || (user_entry == 'ñ')) {
        cout << "It's Alphabet!";
    }
    // Check if it's a digit
    else if (user_entry >= '0' && user_entry <= '9') {
        cout << "It's Digit!";
    }
    // Other special character
    else {
        cout << "It's Special Character!";
    }

    return 0;
}
