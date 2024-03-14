#include <iostream>

// Allows you not to write std::
using namespace std;

int main() {
    // Removes time dependence in the rand() function
    srand(time(NULL));
    
    float num1, num2, res;
    cout << "Enter a number 1: ";
    cin >> num1;

    cout << "Enter a number 2: ";
    cin >> num2;

    char math;
    cout << "Enter a math symbol: ";
    cin >> math;

    // if (math == '+') {
    //     res = num1 + num2;
    //     cout << "Result: " << res << endl;
    // } else if (math == '-') {
    //     res = num1 - num2;
    //     cout << "Result: " << res << endl;
    // } else if (math == '*') {
    //     res = num1 * num2;
    //     cout << "Result: " << res << endl;
    // } else if (math == '/') {
    //     res = num1 / num2;
    //     cout << "Result: " << res << endl;
    // }

    switch (math) {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        res = num1 / num2;
        break;
    default:
        res = 0;
        cout << "Invalid math symbol" << endl;
        break;
    }

    cout << "Result: " << res << endl << endl;

    // Remainder of division
    int a = 10, b = 3, c;
    c = a % b;
    cout << "Remainder of division: " << c << endl;

    // Shortened operations
    a += 5;
    a -=5;
    a--;
    a++;
    cout << "Shortened operations: " << a << endl;

    // Random number
    int randNum = 1 + rand() % 20;
    cout << "Random number: " << randNum << endl;
    
    return 0;
}