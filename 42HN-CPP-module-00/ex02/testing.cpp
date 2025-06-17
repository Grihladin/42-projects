
#include <ctime>
#include <iomanip>
#include <iostream>

void _displayTimestamp(void) {
  std::time_t t = std::time(0);
  std::tm *now = std::localtime(&t);
  std::cout << "[" << std::put_time(now, "%Y-%m-%d_%H:%M:%S") << "] \n";
}

int main() { _displayTimestamp(); }
