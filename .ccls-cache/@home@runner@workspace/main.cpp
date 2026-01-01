// Problem Statement : print numbers from 1 to n

#include <iostream>
using namespace std;

void printNumber(int n) {
  for (int i = 1; i < n; i++) {
    cout << i << " ";
  }
}

int main() {
  int n;
  cout << "Enter an integer : ";
  cin >> n;
  printNumber(n);

  return 0;
}