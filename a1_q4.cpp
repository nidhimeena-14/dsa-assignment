include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false; 
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

void printPrimesUpToN(int n) {
    std::cout << "Prime numbers up to " << n << ": ";
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int num;
    std::cout << "Enter a number (n): ";
    std::cin >> num;

    printPrimesUpToN(num);

    return 0;
}
