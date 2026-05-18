#include <iostream>
#include <string>

int main() {
    std::cout << "Hello world" << endl;

    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
