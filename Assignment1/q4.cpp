#include <iostream>
#include <vector>

std::vector<int> plusOne(std::vector<int>& digits) {
    int n = digits.size();

    // Add 1 to the least significant digit
    digits[n - 1] += 1;

    // Propagate any carry
    int carry = 0;
    for (int i = n - 1; i >= 0; --i) {
        digits[i] += carry;
        carry = digits[i] / 10;
        digits[i] %= 10;
    }

    // If there is still a carry, insert it at the beginning
    if (carry > 0) {
        digits.insert(digits.begin(), carry);
    }

    return digits;
}

int main() {
    std::vector<int> digits = {1, 2, 3};

    std::vector<int> result = plusOne(digits);

    std::cout << "Result: ";
    for (int digit : result) {
        std::cout << digit << " ";
    }
    std::cout << std::endl;

    return 0;
}
