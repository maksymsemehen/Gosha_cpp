#include <iostream>

// Allows you not to write std::
using namespace std;

int main() {
    // if else
    int num_if;
    cout << "Enter a number: ";
    cin >> num_if;

    bool isHappy = true;
    
    if (num_if > 3 && isHappy == true) {
        cout << "Your number is greater than 3 and isHappy == true" << endl;
        if (num_if != 3) {
            cout << "Your number is not 3" << endl;
        }
    } else if (num_if < 3) {
        cout << "Your number is less then 3" << endl;
    } else {
        cout << "Your number is 3" << endl;
    }

    // switch case
    int num_switch;
    cout << "\nEnter a number: ";
    cin >> num_switch;;
    
    switch (num_switch) {
        case 1:
            cout << "Your number is 1" << endl;
            break;
        case 2:
            cout << "Your number is 2" << endl;
            break;
        default:
            cout << "Your number is not 1 or 2 (default)" << endl;
            break;
    }
    
    return 0;
}