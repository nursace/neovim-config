#include <iostream>
#include <cmath>

using namespace std;

int bar() { return 69; }

int foo() { return 42; }

int long_ass_func(int n) {
  for (int i = 0; i < n; i++) {
    cout << "Hello" << endl;
  }
  return 52;
}

int main() {

  cout << pow(3, 2) << endl;

  cout << bar() << endl;
}
