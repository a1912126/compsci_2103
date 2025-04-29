#include <iostream>
#include <list>
#include <string>
#include "BigNumCalc.h"

void printList(const std::list<int>& num) {
    for (int digit : num) {
        std::cout << digit;
    }
    std::cout << std::endl;
}

int main() {
    bigNumCalc calc;

    std::list<int> num1 = calc.buildBigNum("12345");
    std::list<int> num2 = calc.buildBigNum("678");

    std::cout << "Num1: ";
    printList(num1);

    std::cout << "Num2: ";
    printList(num2);

    std::list<int> sum = calc.add(num1, num2);
    std::cout << "Sum: ";
    printList(sum);

    std::list<int> diff = calc.sub(num1, num2);
    std::cout << "Difference: ";
    printList(diff);

    std::list<int> singleDigit = calc.buildBigNum("7"); // For multiplication
    std::list<int> product = calc.mul(num1, singleDigit);
    std::cout << "Product (Num1 * 7): ";
    printList(product);

    return 0;
}
