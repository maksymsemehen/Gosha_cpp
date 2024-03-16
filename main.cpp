#include <iostream>
// Allows you not to write std::
using namespace std;

int main() {
    // Arrays
    int nums[3];
    nums[0] = 56;
    nums[1] = 563;
    nums[2] = 2;
    nums[1] = 4;
    nums[1]++;
    cout << nums[1] << endl << endl;

    float nums2[] = {4, 6, 7, 8, 9};
    for (int i = 0; i < nums2[i]; i++) {
        cout << "El. " << i << ": " << nums2[i] << endl;
    }

    // // Practical task
    // float numbers[5];
    // for (int i = 0; i < 5; i++) {
    //     cout << "Enter number " << i << ": ";
    //     cin >> numbers[i];
    // }

    // for (int i = 0; i < numbers[i]; i++) {
    //     cout << "El. " << i << ": " << numbers[i] << endl;
    // }

    return 0;
}