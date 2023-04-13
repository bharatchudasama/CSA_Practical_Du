#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int value = 0;
    bool isUp = true;

    // Prompt user to select up or down counter
    cout << "Enter 'u' for up counter, 'd' for down counter: ";
    char counterDirection;
    cin >> counterDirection;
    isUp = (counterDirection == 'u');

    // Loop through counter values and print them
    for (int i = 0; i < 32; i++) {
        // Convert value to binary string and print it
        string binaryString = "";
        int tempValue = value;
        for (int j = 4; j >= 0; j--) {
            if (tempValue >= pow(2, j)) {
                binaryString += "1";
                tempValue -= pow(2, j);
            } else {
                binaryString += "0";
            }
        }
        cout << binaryString << endl;

        // Update value based on counter direction
        if (isUp) {
            value++;
            if (value >= 32) {
                value = 0;
            }
        } else {
            value--;
            if (value < 0) {
                value = 31;
            }
        }
    }

    return 0;
}
