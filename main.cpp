#include <iostream>

// Allows you not to write std::
using namespace std;

int main() {
    // For
    for (int i = 0; i < 10; i++) {
        cout << "El. For: " << i << endl;
    }

    // While
    int j = 0;
    while (j < 10) {
        cout << "El. While: " << j << endl;
        j++;
    }

    // Do while
    int k = 0;
    do {
        cout << "El. Do while: " << k << endl;
        k++;
    } while (k < 10);

    // Operators in cycles 
    // Break
    for (int g = 0; g < 10; g++) {
        if (g == 5) break;
        cout << "El. For (break when i = 5): " << g << endl;
    }

    // Continue
    for (int h = 0; h < 10; h++) {
        if (h % 2 == 0) continue;
        cout << "El. For (continue when h % 2 = 0: " << h << endl;
    }

    // Practical example
    srand(time(NULL));
    int rand_num = 1 + rand() % 15;
    bool stop = false;
    int user_input;

    do {
        cout << "Enter number: ";
        cin >> user_input;
        if (user_input != rand_num)
            cout << "L" << endl;
        else
            stop = true;
    } while (!stop);

    cout << "W" << endl;
    
    return 0;
}