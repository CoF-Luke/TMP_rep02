#include <iostream>
#include <string>

int
main()
{
  std::string name; // Create var name

  std::cout << "Write user name: " << std::endl; // Request name
  std::cin >> name;                              // name = "input"

  std::cout << "Hello world from " << name
            << std::endl; // Printing greeting card
}
