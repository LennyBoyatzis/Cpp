#include <iostream>

using namespace std;

int main(void) {
  for (int i=1; i<=100; i++) {
    if (i%15 == 0) cout << "FizzBuzz" << endl;
    if (i%5 == 0) cout << "Buzz" << endl;
    if (i%3 == 0) cout << "FizzBuzz" << endl;
    else cout << i << endl;
  }
}
