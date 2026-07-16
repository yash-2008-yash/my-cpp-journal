#include <iostream>
using namespace std;

int main() {
    
  int* ptr = new int(50);   // create space in Heap, store 50 in it

  cout << "Value: " << *ptr << endl;   // access the value using *ptr

  delete ptr;   // manually free that Heap space

  return 0;
}