//#include <iostream>
//#include <iomanip>
//
//void displayTruthTable(bool (*operation)(bool, bool), const char* opName) {
//    std::cout << "Оператор\tTrue\tFalse" << std::endl;
//
//    bool operand1 = true;
//    bool operand2 = true;
//
//    std::cout << std::boolalpha;
//    std::cout << operand1 << " " << opName << " " << operand2 << "\t" << operation(operand1, operand2) << "\t";
//    operand2 = false;
//    std::cout << operand1 << " " << opName << " " << operand2 << "\t" << operation(operand1, operand2) << std::endl;
//
//    operand1 = false;
//    operand2 = true;
//    std::cout << operand1 << " " << opName << " " << operand2 << "\t" << operation(operand1, operand2) << "\t";
//    operand2 = false;
//    std::cout << operand1 << " " << opName << " " << operand2 << "\t" << operation(operand1, operand2) << std::endl;
//}
//
//bool logicalEquals(bool a, bool b) {
//    return a == b;
//}
//
//bool logicalNotEquals(bool a, bool b) {
//    return a != b;
//}
//
//bool logicalXOR(bool a, bool b) {
//    return a ^ b;
//}
//
//bool logicalAND(bool a, bool b) {
//    return a && b;
//}
//
//bool logicalOR(bool a, bool b) {
//    return a || b;
//}
//
//int main() {
//    setlocale(0, "Russian");
//    std::cout << "Таблица истинности для оператора ==" << std::endl;
//    displayTruthTable(logicalEquals, "==");
//
//    std::cout << "\nТаблица истинности для оператора !=" << std::endl;
//    displayTruthTable(logicalNotEquals, "!=");
//
//    std::cout << "\nТаблица истинности для оператора ^" << std::endl;
//    displayTruthTable(logicalXOR, "^");
//
//    std::cout << "\nТаблица истинности для оператора &&" << std::endl;
//    displayTruthTable(logicalAND, "&&");
//
//    std::cout << "\nТаблица истинности для оператора ||" << std::endl;
//    displayTruthTable(logicalOR, "||");
//
//    return 0;
//}

#include <iostream>
#include <cmath>

int convertToBinary(int decimal) {
    int binary = 0;
    int digit, power = 0;

    while (decimal > 0) {
        digit = decimal % 2;
        binary += digit * pow(10, power);
        decimal /= 2;
        power++;
    }

    return binary;
}

int convertToDecimal(int binary) {
    int decimal = 0;
    int digit, power = 0;

    while (binary > 0) {
        digit = binary % 10;
        decimal += digit * pow(2, power);
        binary /= 10;
        power++;
    }

    return decimal;
}

int main() {
    setlocale(0, "Russian");
    int choice;
    std::cout << "Выберите направление конверсии:\n";
    std::cout << "1. Десятичная -> Двоичная\n";
    std::cout << "2. Двоичная -> Десятичная\n";
    std::cout << "Ваш выбор: ";
    std::cin >> choice;

    int number;
    std::cout << "Введите число для конверсии: ";
    std::cin >> number;

    int convertedNumber;
    if (choice == 1) {
        convertedNumber = convertToBinary(number);
        std::cout << "Результат конверсии: " << convertedNumber << " (в двоичной системе)\n";
    }
    else if (choice == 2) {
        convertedNumber = convertToDecimal(number);
        std::cout << "Результат конверсии: " << convertedNumber << " (в десятичной системе)\n";
    }
    else {
        std::cout << "Неверный выбор.\n";
    }

    return 0;
}
