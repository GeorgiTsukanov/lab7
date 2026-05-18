#include <iostream>
#include <string>

using namespace std; //загрязнение глобального пространства имен

int main() {
    cout << "Hello world" << endl;

    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Hello world from @" << name << endl;
    return 0;
}



