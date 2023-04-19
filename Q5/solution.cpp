#include <iostream>
using namespace std;

int main() {
  int value = 0;
  int direction = 1; // 1 for up, -1 for down

  cout << "Enter the direction of the counter (1 for up, -1 for down): ";
  cin >> direction;

  cout << "Counter values:" << endl;
  for (int i = 0; i < 32; i++) {
    cout << value << endl;
    if (direction == 1) {
      value++;
      if (value == 32) {
        value = 0;
      }
    } else {
      value--;
      if (value == -1) {
        value = 31;
      }
    }
  }

  return 0;
}
