#include "BigNumCalc.h"

std::list<int> bigNumCalc::buildBigNum(std::string numString)
{
    std::list<int>result;
    for (char c :numString){
        result.push_back(int(c));
    }
    if (result.empty()) {
        result.push_back(0);
    }
    removeLeadingZeros(result);
    return result;
}

std::list<int> bigNumCalc::add(std::list<int> num1, std::list<int> num2)
{
    std::list<int> result;
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    int carry = 0;

    while (it1 != num1.rend() || it2 != num2.rend() || carry != 0) {
        int digit1 = (it1 != num1.rend()) ? *it1 : 0;
        int digit2 = (it2 != num2.rend()) ? *it2 : 0;
        int sum = digit1 + digit2 + carry;
        result.push_front(sum % 10);
        carry = sum / 10;

        if (it1 != num1.rend()) ++it1;
        if (it2 != num2.rend()) ++it2;
    }

    removeLeadingZeros(result);
    return result;
}

std::list<int> bigNumCalc::sub(std::list<int> num1, std::list<int> num2)
{
    std::list<int> result;
    auto it1 = num1.rbegin();
    auto it2 = num2.rbegin();
    int borrow = 0;

    while (it1 != num1.rend()) {
        int digit1 = *it1 - borrow;
        int digit2 = (it2 != num2.rend()) ? *it2 : 0;

        if (digit1 < digit2) {
            digit1 += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        int diff = digit1 - digit2;
        result.push_front(diff);

        ++it1;
        if (it2 != num2.rend()) ++it2;
    }

    removeLeadingZeros(result);
    return result;
}

std::list<int> bigNumCalc::mul(std::list<int> num1, std::list<int> num2)
{
    if (num2.size() != 1) {
        std::cerr << "Error: num2 must be a single-digit number!" << std::endl;
        return {0};
    }

    int multiplier = num2.front();
    std::list<int> result;
    auto it1 = num1.rbegin();
    int carry = 0;

    while (it1 != num1.rend() || carry != 0) {
        int digit = (it1 != num1.rend()) ? *it1 : 0;
        int prod = digit * multiplier + carry;
        result.push_front(prod % 10);
        carry = prod / 10;

        if (it1 != num1.rend()) ++it1;
    }

    removeLeadingZeros(result);
    return result;
}

void bigNumCalc::removeLeadingZeros(std::list<int> &num)
{
    while (num.size() > 1 && num.front() == 0) {
        num.pop_front();
    }
}
