#include <iostream>
#include <string>

int main() {
    double operand1;
    char userop; 
    double operand2;
    double result;

    std::cout << "enter a number: ";
    std::cin >> operand1;

    std::cout << "add, subtract, multiply or divide? ";
    std::cin >> userop;

    std::cout << "enter a second number: ";
    std::cin >> operand2;

    switch (userop) {
    case '+':
        result = operand1 + operand2;
        break;
    case '-':
        result = operand1 - operand2;
        break;
    case '*':
        result = operand1 * operand2;
        break;
    case '/':
        result = operand1 / operand2;
        break;

    default:
        break;
}
    
    std::cout << "final number is " << result << std::endl;

    return 0;
}

