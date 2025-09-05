#include <iostream>
#include <string>
#include <cstdlib>

int main() {
  std::string easygit;
  std::cout << "Write name github repository: ";
  std::getline(std::cin, easygit);
  std::system(("git clone https://github.com/" + easygit).c_str());
}
