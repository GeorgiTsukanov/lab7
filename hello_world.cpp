#include <iostream>
#include <string>

int main() {
    // Output йоyйоу
    std::cout << "Hello world" << endl;
    // Объявляем переменную для хранения имени пользователя
    std::string name;
    // Выводим приглашение для ввода
    // std::cout - стандартный вывод (консоль)
    std::cout << "Enter your name: ";
    // std::cin - стандартный ввод (клавиатура)
    // Оператор >> считывает данные в переменную name
    std::cin >> name;
    // Выводим приветствие с именем пользователя
    // std::endl - перевод строки и сброс буфера
    std::cout << "Hello world from @" << name << std::endl;
    // Возвращаем 0 - успешное завершение программы
    return 0;
}
