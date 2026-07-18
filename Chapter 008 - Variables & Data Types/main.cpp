#include <iostream>

enum TaskStatus { 
  PENDING, 
  IN_PROGRESS, 
  DONE 
};

int main() {

  TaskStatus task = PENDING;

  if (task == PENDING) {
    std::cout << "Your task is still pending. Shut the fuck up and wait for it!" << std::endl;
  } 
  else if (task==IN_PROGRESS) {
    std::cout << "Still in progress. Hold your horses, man!" << std::endl;
  } 
  else {
    std::cout << "Here! It's done. Take this and fuck off!" << std::endl;
  }

  return 0;
}