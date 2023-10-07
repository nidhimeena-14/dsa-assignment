#include <iostream>

int reverseNumber(int num) {
    int reversedNum = 0;

    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    return reversedNum;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int reversed = reverseNumber(num);

    std::cout << "Reversed number: " << reversed << std::endl;

    return 0;
}
