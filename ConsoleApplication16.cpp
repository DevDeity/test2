#include <iostream>
#include <iomanip>

void displayTruthTable(bool (*operation)(bool, bool), const char* opName) {
    std::cout << "Оператор\tTrue\tFalse" << std::endl;

    bool operand1 = true;
    bool operand2 = true;

    std::cout << std::boolalpha;
    std::cout << operand1 << " " << opName << " " << operand2 << "\t" << operation(operand1, operand2) << "\t";
    operand2 = false;
    std::cout << operand1 << " " << opName << " " << operand2 << "\t" << operation(operand1, operand2) << std::endl;

    operand1 = false;
    operand2 = true;
    std::cout << operand1 << " " << opName << " " << operand2 << "\t" << operation(operand1, operand2) << "\t";
    operand2 = false;
    std::cout << operand1 << " " << opName << " " << operand2 << "\t" << operation(operand1, operand2) << std::endl;
}

bool logicalEquals(bool a, bool b) {
    return a == b;
}

bool logicalNotEquals(bool a, bool b) {
    return a != b;
}

bool logicalXOR(bool a, bool b) {
    return a ^ b;
}

bool logicalAND(bool a, bool b) {
    return a && b;
}

bool logicalOR(bool a, bool b) {
    return a || b;
}

int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Таблица истинности для оператора ==" << std::endl;
    displayTruthTable(logicalEquals, "==");

    std::cout << "\nТаблица истинности для оператора !=" << std::endl;
    displayTruthTable(logicalNotEquals, "!=");

    std::cout << "\nТаблица истинности для оператора ^" << std::endl;
    displayTruthTable(logicalXOR, "^");

    std::cout << "\nТаблица истинности для оператора &&" << std::endl;
    displayTruthTable(logicalAND, "&&");

    std::cout << "\nТаблица истинности для оператора ||" << std::endl;
    displayTruthTable(logicalOR, "||");

    return 0;
}
