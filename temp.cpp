#include <cmath>
#include <iostream>

using namespace std;

int bar() { return 99; }

int foo() { return 42; }

int long_ass_func(int n) {
  for (int i = 0; i < n; i++) {
    cout << "Hello" << endl;
  }
  return 52;
}

int main() {

  cout << pow(3, 2) << endl;

  cout << foo() << endl;
  cout << foo() << endl;
  cout << foo() << endl;
  cout << foo() << endl;
  cout << foo() << endl;

  cout << bar() << endl;
}
