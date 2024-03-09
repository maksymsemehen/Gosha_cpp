#include <iostream>

// Allows you not to write std::
using namespace std;

int main() {
  // Variable overwrite
  int num = -45;
  num = 2;
  cout << "Variable: " << num << endl;

  num = 3;
  cout << "Variable: " << num << endl << endl;

  // Cin fuuncion
  int a, b;
  cout << "Type variable a: ";
  cin >> a;

  cout << "Type variable b: ";
  cin >> b;

  cout << "\na = " << a << endl << "b = " << b << endl;

  // Data types
  // short num1 = -32767; // -32k to 32k / 2 bytes
  // int num2 = -2147483647; // -2b to 2b / 4 bytes
  // long num3 = -2147483647; // -2b to 2b / 8 bytes

  // unsigned short int num4 = 65535; // 0 to 65k / 2 bytes
  // unsigned int num5 = 4294967295; // 0 to 4b / 4 bytes
  // unsigned long int num6 = 4294967295; // 0 to 4b / 8 bytes

  // Floating point numbers
  // float num7 = 3.14f; // 4 bytes
  // double num8 = 123.456f; // 8 bytes

  // Characters
  // char sym = 'M'; // 1 byte

  // Boolean
  // bool isHappy = true; // 1 byte
  
  return 0;
}